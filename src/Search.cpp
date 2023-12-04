#include "../header/Search.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

Search::Search() {
    for (unsigned i = 0; i < 100; i++) {    //initialize all movie point values to 0
        points.at(i) = 0;
    }
}

Search::~Search() {}

vector<Movie> Search::simlarAlgo() {}

vector<Movie> Search::filterAlgo() {}

void Search::searchSimilarPoints(string movieInput) {
    unsigned m = 1;
    for (unsigned i = 0; i < 100; i++) {    //locate the inputted movie
        if (movieInput == movies.at(i).getTitle()) {
            m = i;
        }
    }

    for (unsigned i = 0; i < 100; i++) {    //assign point values by year
        if (movies.at(i).getYear() >= movies.at(m).getYear() - 5 & movies.at(i).getYear() <= movies.at(m).getYear() + 5) {
            points.at(i) += 1;
        }
    }

    for (unsigned i = 0; i < 100; i++) {    //assign point values by genres
        for (unsigned j = 0; j < movies.at(i).getGenres().size(); j++) {    //compared to size of getGenres() vector for i-th movie
            for (unsigned k = 0; k < movies.at(m).getGenres().size(); k++) {  //compared to size of getGenres() vector for movieInput
                if (movies.at(m).getGenres().at(k) == movies.at(i).getGenres().at(j)) { //comparing genres case-by-case
                    points.at(i) += 3;
                }
            }
        }
    }

    for (unsigned i = 0; i < 100; i++) {    //assign point values by duration
        if (movies.at(i).getDuration() >= movies.at(m).getDuration() - 7 & movies.at(i).getDuration() <= movies.at(m).getDuration() + 7) {  //approx. standard deviation of 7
            points.at(i) += 2;
        }
        else if (movies.at(i).getDuration() >= movies.at(m).getDuration() - 15 & movies.at(i).getDuration() <= movies.at(m).getDuration() + 15) {   //approx. two standard deviations
            points.at(i) += 1;
        }
    }

    for (unsigned i = 0; i < 100; i++) {    //assign point values by popularity (number of votes)
        if (movies.at(i).getNumOfVotes() >= movies.at(m).getNumOfVotes() - 100000 & movies.at(i).getNumOfVotes() <= movies.at(m).getNumOfVotes() + 100000) {
            points.at(i) += 1;
        }
    }

    for (unsigned i = 0; i < 100; i++) {    //assign point values by directors
        for (unsigned j = 0; j < movies.at(i).getDirectors().size(); j++) {    //compared to size of getDirectors() vector for i-th movie
            for (unsigned k = 0; k < movies.at(m).getDirectors().size(); k++) {  //compared to size of getDirectors() vector for movieInput
                if (movies.at(m).getDirectors().at(k) == movies.at(i).getDirectors().at(j)) { //comparing directors case-by-case
                    points.at(i) += 2;
                }
            }
        }
    }

    for (unsigned i = 0; i < 100; i++) {    //assign point values by actors
        for (unsigned j = 0; j < movies.at(i).getActors().size(); j++) {    //compared to size of getActors() vector for i-th movie
            for (unsigned k = 0; k < movies.at(m).getActors().size(); k++) {  //compared to size of getActors() vector for movieInput
                if (movies.at(m).getActors().at(k) == movies.at(i).getActors().at(j)) { //comparing actors case-by-case
                    points.at(i) += 1;
                }
            }
        }
    }
}

void Search::genreFilterPoints() {
    for (unsigned i = 0; i < 100; ++i){
        //OPTIMIZE
        // if (movies.at(i).getGenres().size() == 1) {}
        // else {} for cases of 2 or 3 genres
        // also put genres into a vector of strings and compare vector to vector with an additional for loop
        
        for (unsigned j = 0; j < movies.at(i).getGenres().size(); j++) {
            if (movies.at(i).getGenres().at(j) == "Action"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Adventure"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Animation"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Biography"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Comedy"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Crime"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Drama"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Family"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Fantasy"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Film-Noir"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "History"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Horror"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Music"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Musical"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Mystery"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Romance"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Sci-Fi"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Thriller"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "War"){
                points.at(i) += 1;
            }
            else if (movies.at(i).getGenres().at(j) == "Western"){
                points.at(i) += 1;
            }
        }
    }
}

void Search::yearFilterPoints() {
    for (unsigned i = 0; i < 100; ++i){
        if (movies.at(i).getYear() >= 1920 && movies.at(i).getYear() <= 1940){
            points.at(i) += 1;
        }
        else if (movies.at(i).getYear() >= 1941 && movies.at(i).getYear() <= 1960){
            points.at(i) += 1;
        }
        else if (movies.at(i).getYear() >= 1961 && movies.at(i).getYear() <= 1980){
            points.at(i) += 1;
        }
        else if (movies.at(i).getYear() >= 1981 && movies.at(i).getYear() <= 2000){
            points.at(i) += 1;
        }
        else if (movies.at(i).getYear() >= 2001 && movies.at(i).getYear() <= 2020){
            points.at(i) += 1;
        }
    }
}

void Search::durationFilterPoints() {
    for (unsigned i = 0; i < 100; ++i){
        if (movies.at(i).getDuration() >= 60 && movies.at(i).getYear() <= 90){
            points.at(i) += 1;
        }
        else if (movies.at(i).getDuration() >= 91 && movies.at(i).getYear() <= 120){
            points.at(i) += 1;
        }       
        else if (movies.at(i).getDuration() >= 121 && movies.at(i).getYear() <= 150){
            points.at(i) += 1;
        }
        else if (movies.at(i).getDuration() >= 151 && movies.at(i).getYear() <= 180){
            points.at(i) += 1;
        }
        else if (movies.at(i).getDuration() >= 181 && movies.at(i).getYear() <= 210){
            points.at(i) += 1;
        }
        else if (movies.at(i).getDuration() >= 211 && movies.at(i).getYear() <= 240){
            points.at(i) += 1;
        }
    }
}

void Search::ratingFilterPoints() {
    for (unsigned i = 0; i < 100; ++i){
        if (movies.at(i).getRating() > 0 && movies.at(i).getRating() <= 8.3){
            points.at(i) += 1;
        }
        else if (movies.at(i).getRating() == 8.4){
            points.at(i) += 1;
        }
        else if (movies.at(i).getRating() == 8.5){
            points.at(i) += 1;
        }
        else if (movies.at(i).getRating() == 8.6){
            points.at(i) += 1;
        }
        else if (movies.at(i).getRating() == 8.7){
            points.at(i) += 1;
        }
        else if (movies.at(i).getRating() == 8.8){
            points.at(i) += 1;
        }
        else if (movies.at(i).getRating() >= 8.9){
            points.at(i) += 1;
        }
    }
}

void Search::voteFilterPoints() {
    for (unsigned i = 0; i < 100; ++i){
        if (movies.at(i).getNumOfVotes() >= 50000 && movies.at(i).getNumOfVotes() <= 500000){
            points.at(i) += 1;
        }
        else if (movies.at(i).getNumOfVotes() >= 500001 && movies.at(i).getNumOfVotes() <= 1000000){
            points.at(i) += 1;
        }
        else if (movies.at(i).getNumOfVotes() >= 1000001 && movies.at(i).getNumOfVotes() <= 1500000){
            points.at(i) += 1;
        }
        else if (movies.at(i).getNumOfVotes() >= 1500001 && movies.at(i).getNumOfVotes() <= 2000000){
            points.at(i) += 1;
        }
        else if (movies.at(i).getNumOfVotes() >= 2000001 && movies.at(i).getNumOfVotes() <= 2500000){
            points.at(i) += 1;
        }
    }
}