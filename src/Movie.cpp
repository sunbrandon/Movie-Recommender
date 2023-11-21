#include "../header/Movie.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

Movie::Movie() {}

Movie::Movie(string title, int year, vector<string> genres, int duration, vector<string> directors, vector<string> writers, string production, vector<string> actors, vector<string> descriptions, double rating, int numOfVotes) {

    this->title = title;
    this->year = year;
    this->genres = genres;
    this->duration = duration;
    this->directors = directors;
    this->writers = writers;
    this->production = production;
    this->actors = actors;
    this->descriptions = descriptions;
    this->rating = rating;
    this->numOfVotes = numOfVotes;
}

Movie::~Movie() {}