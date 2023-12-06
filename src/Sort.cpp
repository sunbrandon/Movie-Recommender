#include "../header/Sort.h"
#include "../header/Movie.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

Sort::Sort() {
    title = "";
    year = 0;
    rating = 0.0;
    numOfVotes = 0;
}

Sort::~Sort() {}

vector<Movie> Sort::sortCSV() {
    vector<Movie> returnVector;
    const string fileName = "movies.csv";

    ifstream istream(fileName);
    if (istream.is_open()) {
        string line;
        while (getline(istream, line)) {
            Movie returnMovie;

            stringstream ss(line);
            string movieID, title, year, genre, duration, directors, writers, production, actors, description, rating, popularity;
            vector<string> genreV, directorsV, writersV, actorsV, descriptionV;
    

            getline(ss, movieID, ','); //movieID
            getline(ss, title, ','); //title
            getline(ss, year, ','); //year

            if(ss.peek() == '\"') { //genre
                ss.ignore();
                getline(ss, genre, '\"');

                stringstream ssg(genre);

                while (ssg.good()) {
                    string isoGenre;
                    if(ssg.peek() == ' ') {
                        ssg.get();
                    }
                    getline(ssg, isoGenre, ',');
                    genreV.push_back(isoGenre);
                }
                if (ssg.good()) {
                    string endGenre;
                    getline(ssg, endGenre, '\"');
                    genreV.push_back(endGenre);
                }
                ss.ignore();
            }
            else {
                getline(ss, genre, ','); 
                genreV.push_back(genre);
            }


            getline(ss, duration, ','); //duration

            if (ss.peek() == '\"') {  //directors
                ss.ignore();

                getline(ss, directors, '\"');

                stringstream ssd(directors);

                while (ssd.good()) {
                    string isoDir;
                    if(ssd.peek() == ' ') {
                        ssd.get();
                    }
                    getline(ssd, isoDir, ',');
                    directorsV.push_back(isoDir);
                }
                if (ssd.good()) {
                    string endDir;
                    getline(ssd, endDir, '\"');
                    directorsV.push_back(endDir);
                }

                ss.ignore();
            }
            else {
                getline(ss, directors, ','); 
                directorsV.push_back(directors);
            }

            if (ss.peek() == '\"') { //writers
                ss.ignore();

                getline(ss, writers, '\"');

                stringstream ssw(writers);

                while (ssw.good()) {
                    string isoWriters;
                    if(ssw.peek() == ' ') {
                        ssw.get();
                    }
                    getline(ssw, isoWriters, ',');
                    writersV.push_back(isoWriters);
                }
                if (ssw.good()) {
                    string endWriters;
                    getline(ssw, endWriters, '\"');
                    writersV.push_back(endWriters);
                }

                ss.ignore();
            }
            else {
                getline(ss, writers, ','); 
                writersV.push_back(writers);
            }

            getline(ss, production, ','); //production

            if (ss.peek() == '\"') { //actors
                ss.ignore();

                getline(ss, actors, '\"');

                stringstream ssa(actors);

                while (ssa.good()) {
                    string isoActors;
                    if(ssa.peek() == ' ') {
                        ssa.get();
                    }
                    getline(ssa, isoActors, ',');
                    actorsV.push_back(isoActors);
                }
                if (ssa.good()) {
                    string endActors;
                    getline(ssa, endActors, '\"');
                    actorsV.push_back(endActors);
                }

                ss.ignore();
            }
            else {
                getline(ss, actors, ','); 
                actorsV.push_back(actors);
            }

            if (ss.peek() == '\"') { //description
                ss.ignore();
                getline(ss, description, '\"');
                descriptionV.push_back(description);
                ss.ignore();
            }
            else {
                getline(ss, description, ','); 
                descriptionV.push_back(description);
            }

        

            getline(ss, rating, ','); //rating

            getline(ss, popularity, ','); //# of votes

            //cout << "movieID: " << movieID << ", title: " << title << ", year: " << year << ", genres: " << genre << ", duration: " << duration << ", dir: " << directors << ", writ: " << writers << endl;
            //cout << ", prod: " << production << ", act: " << actors << endl;
            //cout << "desc: " << description << endl;
            //cout << "rat: " << rating << ", pop: " << popularity << endl;

            returnMovie.setMovieID(movieID);
            returnMovie.setTitle(title);
            returnMovie.setYear(stoi(year));
            returnMovie.setGenres(genreV);
            returnMovie.setDuration(stoi(duration));
            returnMovie.setDirectors(directorsV);
            returnMovie.setWriters(writersV);
            returnMovie.setProduction(production);
            returnMovie.setActors(actorsV);
            returnMovie.setDescriptions(descriptionV);
            returnMovie.setRating(stod(rating));
            returnMovie.setNumOfVotes(stoi(popularity));

            returnVector.push_back(returnMovie);
        }
    }
    return returnVector;
}