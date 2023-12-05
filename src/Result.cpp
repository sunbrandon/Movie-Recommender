#include "../header/Result.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Result::Result() {}

Result::~Result() {}

void Result::quizResult() {}

void Result::similarResult(vector <Movie> movie) {
    cout << "Here are three similar movies:" << endl;
    for (int i = 0; i < 3; ++i){
        cout << "Movie title: " << movie.at(i).getTitle() << endl;
        cout << "Year of movie: " << movie.at(i).getYear() << endl;
        cout << "Movie genre(s): ";
        int commaGenreNum = movie.at(i).getGenres().size() - 1;
        for (int j = 0; j < movie.at(i).getGenres().size(); ++j){
            cout << movie.at(i).getGenres().at(j);
            if (commaGenreNum > 0){
                cout << ", ";
                commaGenreNum--;
            }
        }
        cout << endl;
        cout << "Duration of movie: " << movie.at(i).getDuration() << endl;
        cout << "Movie director(s): ";
        int commaDirectorNum = movie.at(i).getDirectors().size() - 1;
        for (int j = 0; j < movie.at(i).getDirectors().size(); ++j){
            cout << movie.at(i).getDirectors().at(j);
            if (commaDirectorNum > 0){
                cout << ", ";
                commaDirectorNum--;
            }
        }
        cout << endl;
        cout << "Movie writer(s): ";
        int commaWriterNum = movie.at(i).getWriters().size() - 1;
        for (int j = 0; j < movie.at(i).getWriters().size(); ++j){
            cout << movie.at(i).getWriters().at(j);
            if (commaWriterNum > 0){
                cout << ", ";
                commaWriterNum--;
            }
        }
        cout << endl;
        cout << "Producer: " << movie.at(i).getProduction() << endl;
        int commaActorNum = movie.at(i).getActors().size() - 1;
        for (int j = 0; j < movie.at(i).getActors().size(); ++j){
            cout << movie.at(i).getActors().at(j);
            if (commaActorNum > 0){
                cout << ", ";
                commaActorNum--;
            }
        }
        cout << endl;
        cout << "Movie description: " << movie.at(i).getDescriptions().at(0) << endl;
        cout << "Rating: " << movie.at(i).getRating() << endl;
        cout << "Votes: " << movie.at(i).getNumOfVotes() << endl;
    }
}

void Result::filterResult() {}

void Result::randomResult(Movie movie) {
    cout << "Try watching this movie:" << endl;
    cout << "Movie title: " << movie.getTitle() << endl;
    cout << "Year of movie: " << movie.getYear() << endl;
    cout << "Movie genre(s): ";
    int commaGenreNum = movie.getGenres().size() - 1;
    for (int i = 0; i < movie.getGenres().size(); ++i){
        cout << movie.getGenres().at(i);
        if (commaGenreNum > 0){
            cout << ", ";
            commaGenreNum--;
        }
    }
    cout << endl;
    cout << "Duration of movie: " << movie.getDuration() << endl;
    cout << "Movie director(s): ";
    int commaDirectorNum = movie.getDirectors().size() - 1;
    for (int i = 0; i < movie.getDirectors().size(); ++i){
        cout << movie.getDirectors().at(i);
        if (commaDirectorNum > 0){
            cout << ", ";
            commaDirectorNum--;
        }
    }
    cout << endl;
    cout << "Movie writer(s): ";
    int commaWriterNum = movie.getWriters().size() - 1;
    for (int i = 0; i < movie.getWriters().size(); ++i){
        cout << movie.getWriters().at(i);
        if (commaWriterNum > 0){
            cout << ", ";
            commaWriterNum--;
        }
    }
    cout << endl;
    cout << "Producer: " << movie.getProduction() << endl;
    int commaActorNum = movie.getActors().size() - 1;
    for (int i = 0; i < movie.getActors().size(); ++i){
        cout << movie.getActors().at(i);
        if (commaActorNum > 0){
            cout << ", ";
            commaActorNum--;
        }
    }
    cout << endl;
    cout << "Movie description: " << movie.getDescriptions().at(0) << endl;
    cout << "Rating: " << movie.getRating() << endl;
    cout << "Votes: " << movie.getNumOfVotes() << endl;
}