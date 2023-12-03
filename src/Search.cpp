#include "../header/Search.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

Search::Search() {}

Search::~Search() {}

vector<Movie> Search::simlarAlgo() {}

vector<Movie> Search::filterAlgo() {}

void Search::searchSimilarPoints() {}
void Search::genreFilterPoints() {

    for (unsigned i = 0; i < 100; ++i){
        if (movie.at(i).getGenres() == "Action"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Adventure"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Animation"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Biography"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Comedy"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Crime"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Drama"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Family"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Fantasy"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Film-Noir"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "History"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Horror"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Music"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Musical"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Mystery"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Romance"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Sci-Fi"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Thriller"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "War"){
            points.at(i) += 1;
        }
        else if (movie.at(i).getGenres() == "Western"){
            points.at(i) += 1;
        }
    }
}

void Search::yearFilterPoints() {

    for (unsigned i = 0; i < 100; ++i){
        if (movie.at(i).getYear() >= 1920 && movie.at(i).getYear() <= 1940){
            points.at(i) += 1;
        }
        else if (movie.at(i).getYear() >= 1941 && movie.at(i).getYear() <= 1960){
            points.at(i) += 1;
        }
        else if (movie.at(i).getYear() >= 1961 && movie.at(i).getYear() <= 1980){
            points.at(i) += 1;
        }
        else if (movie.at(i).getYear() >= 1981 && movie.at(i).getYear() <= 2000){
            points.at(i) += 1;
        }
        else if (movie.at(i).getYear() >= 2001 && movie.at(i).getYear() <= 2020){
            points.at(i) += 1;
        }
    }
}

void Search::durationFilterPoints() {

    for (unsigned i = 0; i < 100; ++i){
        if (movie.at(i).getDuration() >= 60 && movie.at(i).getYear() <= 90){
            points.at(i) += 1;
        }
        else if (movie.at(i).getDuration() >= 91 && movie.at(i).getYear() <= 120){
            points.at(i) += 1;
        }       
        else if (movie.at(i).getDuration() >= 121 && movie.at(i).getYear() <= 150){
            points.at(i) += 1;
        }
        else if (movie.at(i).getDuration() >= 151 && movie.at(i).getYear() <= 180){
            points.at(i) += 1;
        }
        else if (movie.at(i).getDuration() >= 181 && movie.at(i).getYear() <= 210){
            points.at(i) += 1;
        }
        else if (movie.at(i).getDuration() >= 211 && movie.at(i).getYear() <= 240){
            points.at(i) += 1;
        }
    }
}

void Search::ratingFilterPoints() {

    for (unsigned i = 0; i < 100; ++i){
        if (movie.at(i).getRating() > 0 && movie.at(i).getRating() <= 8.3){
            points.at(i) += 1;
        }
        else if (movie.at(i).getRating() == 8.4){
            points.at(i) += 1;
        }
        else if (movie.at(i).getRating() == 8.5){
            points.at(i) += 1;
        }
        else if (movie.at(i).getRating() == 8.6){
            points.at(i) += 1;
        }
        else if (movie.at(i).getRating() == 8.7){
            points.at(i) += 1;
        }
        else if (movie.at(i).getRating() == 8.8){
            points.at(i) += 1;
        }
        else if (movie.at(i).getRating() >= 8.9){
            points.at(i) += 1;
        }
    }
}

void Search::voteFilterPoints() {

    for (unsigned i = 0; i < 100; ++i){
        if (movie.at(i).getNumOfVotes() >= 50000 && movie.at(i).getNumOfVotes() <= 500000){
            points.at(i) += 1;
        }
        else if (movie.at(i).getNumOfVotes() >= 500001 && movie.at(i).getNumOfVotes() <= 1000000){
            points.at(i) += 1;
        }
        else if (movie.at(i).getNumOfVotes() >= 1000001 && movie.at(i).getNumOfVotes() <= 1500000){
            points.at(i) += 1;
        }
        else if (movie.at(i).getNumOfVotes() >= 1500001 && movie.at(i).getNumOfVotes() <= 2000000){
            points.at(i) += 1;
        }
        else if (movie.at(i).getNumOfVotes() >= 2000001 && movie.at(i).getNumOfVotes() <= 2500000){
            points.at(i) += 1;
        }
    }
}