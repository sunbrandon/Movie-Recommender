#include "../header/Result.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Result::Result() {}

Result::~Result() {}

void Result::quizResult() {}

void Result::similarResult() {}

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