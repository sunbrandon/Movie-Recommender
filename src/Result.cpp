#include "../header/Result.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Result::Result() {}

Result::~Result() {}

void Result::quizResult(vector<Movie>& sortedList) {
    vector<Movie> quizMovies = quizAlgo(sortedList);
    cout << endl;
    cout << "Recommendations based on your quiz answers: " << endl;
    cout << endl;
    for (int i = 0; i < 3; ++i){
        cout << "Movie title: " << quizMovies.at(i).getTitle() << endl;
        cout << "Year of movie: " << quizMovies.at(i).getYear() << endl;
        cout << "Movie genre(s): ";
        int commaGenreNum = quizMovies.at(i).getGenres().size() - 1;
        for (int j = 0; j < quizMovies.at(i).getGenres().size(); ++j){
            cout << quizMovies.at(i).getGenres().at(j);
            if (commaGenreNum > 0){
                cout << ", ";
                commaGenreNum--;
            }
        }
        cout << endl;
        cout << "Duration of movie: " << quizMovies.at(i).getDuration() << endl;
        cout << "Movie director(s): ";
        int commaDirectorNum = quizMovies.at(i).getDirectors().size() - 1;
        for (int j = 0; j < quizMovies.at(i).getDirectors().size(); ++j){
            cout << quizMovies.at(i).getDirectors().at(j);
            if (commaDirectorNum > 0){
                cout << ", ";
                commaDirectorNum--;
            }
        }
        cout << endl;
        cout << "Movie writer(s): ";
        int commaWriterNum = quizMovies.at(i).getWriters().size() - 1;
        for (int j = 0; j < quizMovies.at(i).getWriters().size(); ++j){
            cout << quizMovies.at(i).getWriters().at(j);
            if (commaWriterNum > 0){
                cout << ", ";
                commaWriterNum--;
            }
        }
        cout << endl;
        cout << "Producer: " << quizMovies.at(i).getProduction() << endl;
        cout << "Actors: ";
        int commaActorNum = quizMovies.at(i).getActors().size() - 1;
        for (int j = 0; j < quizMovies.at(i).getActors().size(); ++j){
            cout << quizMovies.at(i).getActors().at(j);
            if (commaActorNum > 0){
                cout << ", ";
                commaActorNum--;
            }
        }
        cout << endl;
        cout << "Movie description: " << quizMovies.at(i).getDescriptions().at(0) << endl;
        cout << "Rating: " << quizMovies.at(i).getRating() << endl;
        cout << "Votes: " << quizMovies.at(i).getNumOfVotes() << endl;
        cout << endl;
    }
}

void Result::similarResult(vector<Movie>& sortedList, string similarTitle) {
    vector<Movie> similarMovies = similarAlgo(sortedList, similarTitle);
    cout << endl;
    cout << endl;
    cout << "Recommendations based on movie:" << endl;
    cout << endl;
    for (int i = 0; i < 3; ++i){
        cout << "Movie title: " << similarMovies.at(i).getTitle() << endl;
        cout << "Year of movie: " << similarMovies.at(i).getYear() << endl;
        cout << "Movie genre(s): ";
        int commaGenreNum = similarMovies.at(i).getGenres().size() - 1;
        for (int j = 0; j < similarMovies.at(i).getGenres().size(); ++j){
            cout << similarMovies.at(i).getGenres().at(j);
            if (commaGenreNum > 0){
                cout << ", ";
                commaGenreNum--;
            }
        }
        cout << endl;
        cout << "Duration of movie: " << similarMovies.at(i).getDuration() << endl;
        cout << "Movie director(s): ";
        int commaDirectorNum = similarMovies.at(i).getDirectors().size() - 1;
        for (int j = 0; j < similarMovies.at(i).getDirectors().size(); ++j){
            cout << similarMovies.at(i).getDirectors().at(j);
            if (commaDirectorNum > 0){
                cout << ", ";
                commaDirectorNum--;
            }
        }
        cout << endl;
        cout << "Movie writer(s): ";
        int commaWriterNum = similarMovies.at(i).getWriters().size() - 1;
        for (int j = 0; j < similarMovies.at(i).getWriters().size(); ++j){
            cout << similarMovies.at(i).getWriters().at(j);
            if (commaWriterNum > 0){
                cout << ", ";
                commaWriterNum--;
            }
        }
        cout << endl;
        cout << "Producer: " << similarMovies.at(i).getProduction() << endl;
        cout << "Actors: ";
        int commaActorNum = similarMovies.at(i).getActors().size() - 1;
        for (int j = 0; j < similarMovies.at(i).getActors().size(); ++j){
            cout << similarMovies.at(i).getActors().at(j);
            if (commaActorNum > 0){
                cout << ", ";
                commaActorNum--;
            }
        }
        cout << endl;
        cout << "Movie description: " << similarMovies.at(i).getDescriptions().at(0) << endl;
        cout << "Rating: " << similarMovies.at(i).getRating() << endl;
        cout << "Votes: " << similarMovies.at(i).getNumOfVotes() << endl;
        cout << endl;
    }
}

void Result::filterResult(vector<Movie>& sortedList, vector<string>& filters) {
    cout << endl;
    cout << "Recommendations based on filters:" << endl;
    cout << endl;
    vector <Movie> filteredMovies = filterAlgo(sortedList, filters);
    for (int i = 0; i < 3; ++i){
        cout << "Movie title: " << filteredMovies.at(i).getTitle() << endl;
        cout << "Year of movie: " << filteredMovies.at(i).getYear() << endl;
        cout << "Movie genre(s): ";
        int commaGenreNum = filteredMovies.at(i).getGenres().size() - 1;
        for (int j = 0; j < filteredMovies.at(i).getGenres().size(); ++j){
            cout << filteredMovies.at(i).getGenres().at(j);
            if (commaGenreNum > 0){
                cout << ", ";
                commaGenreNum--;
            }
        }
        cout << endl;
        cout << "Duration of movie: " << filteredMovies.at(i).getDuration() << endl;
        cout << "Movie director(s): ";
        int commaDirectorNum = filteredMovies.at(i).getDirectors().size() - 1;
        for (int j = 0; j < filteredMovies.at(i).getDirectors().size(); ++j){
            cout << filteredMovies.at(i).getDirectors().at(j);
            if (commaDirectorNum > 0){
                cout << ", ";
                commaDirectorNum--;
            }
        }
        cout << endl;
        cout << "Movie writer(s): ";
        int commaWriterNum = filteredMovies.at(i).getWriters().size() - 1;
        for (int j = 0; j < filteredMovies.at(i).getWriters().size(); ++j){
            cout << filteredMovies.at(i).getWriters().at(j);
            if (commaWriterNum > 0){
                cout << ", ";
                commaWriterNum--;
            }
        }
        cout << endl;
        cout << "Producer: " << filteredMovies.at(i).getProduction() << endl;
        cout << "Actors: ";
        int commaActorNum = filteredMovies.at(i).getActors().size() - 1;
        for (int j = 0; j < filteredMovies.at(i).getActors().size(); ++j){
            cout << filteredMovies.at(i).getActors().at(j);
            if (commaActorNum > 0){
                cout << ", ";
                commaActorNum--;
            }
        }
        cout << endl;
        cout << "Movie description: " << filteredMovies.at(i).getDescriptions().at(0) << endl;
        cout << "Rating: " << filteredMovies.at(i).getRating() << endl;
        cout << "Votes: " << filteredMovies.at(i).getNumOfVotes() << endl;
        cout << endl;
    }
}

void Result::randomResult(Movie movie) {
    cout << endl;
    cout << endl;
    cout << "Try watching this movie:" << endl;
    cout << endl;
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
    cout << "List of actors: ";
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