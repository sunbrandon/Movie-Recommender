#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class Movie {
 public:

   Movie();
   Movie(string title, int year, vector<string> genres, int duration, vector<string> directors, vector<string> writers, string production, vector<string> actors, vector<string> descriptions, double rating, int numOfVotes);
   ~Movie();
  
 private:

   int year;
   int numOfVotes;
   int duration;

   double rating;

   string title;
   string production;

   vector<string> genres;
   vector<string> directors;
   vector<string> writers;
   vector<string> actors;
   vector<string> descriptions;

   Movie operator=(const Movie&) = delete;

};