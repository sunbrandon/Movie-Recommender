#include "../header/Movie.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

Movie::Movie() {
    year = 0;
    numOfVotes = 0;
    duration = 0;
    rating = 0.0;
    title = "";
    production = "";
    movieID = "";
}

Movie::Movie(string movieID, string title, int year, vector<string> genres, int duration, vector<string> directors, vector<string> writers, string production, vector<string> actors, vector<string> descriptions, double rating, int numOfVotes) {
    this->movieID = movieID;
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

//setters

void Movie::setYear(int year) {
    this->year = year;
}

void Movie::setNumOfVotes(int votes) {
    this->numOfVotes = votes;
}

void Movie::setDuration(int duration) {
    this->duration = duration;
}

void Movie::setRating(double rating) {
    this->rating = rating;
}

void Movie::setTitle(string title) {
    this->title = title;
}

void Movie::setProduction(string production) {
    this->production = production;
}

void Movie::setMovieID(string movieID) {
    this->movieID = movieID;
}

void Movie::setGenres(vector<string>& genre) {
    this->genres = genre;
}

void Movie::setDirectors(vector<string>& directors) {
    this->directors = directors;
}

void Movie::setWriters(vector<string>& writers) {
    this->writers = writers;
}

void Movie::setActors(vector<string>& actors) {
    this->actors = actors;   
}

void Movie::setDescriptions(vector<string>& description) {
    this->descriptions = description;
}

//getters

int Movie::getYear() const {
    return this->year;
}

int Movie::getNumOfVotes() const {
    return this->numOfVotes;
}

int Movie::getDuration() const {
    return this->duration;
}

double Movie::getRating() const {
    return this->rating;
}

string Movie::getTitle() const {
    return this->title;
}

string Movie::getProduction() const {
    return this->production;
}

string Movie::getMovieID() const {
    return this->movieID;
}

vector<string> Movie::getGenres() const {
    return this->genres;
}

vector<string> Movie::getDirectors() const {
    return this->directors;
}

vector<string> Movie::getWriters() const {
    return this->writers;
}

vector<string> Movie::getActors() const {
    return this->actors;
}

vector<string> Movie::getDescriptions() const {
    return this->descriptions;
}


