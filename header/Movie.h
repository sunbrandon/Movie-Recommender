#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;

class Movie {
 public:

    Movie();
    Movie(string, int, vector<string>, double, int);
    ~Movie();
  
 private:

    string title;
    int year;
    vector<string> genres;
    double rating;
    int numOfVotes;
    Movie operator=(const Output&) = delete;

};