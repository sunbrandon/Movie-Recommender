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

   int year;
   int numOfVotes;
   int duration
   double rating;
   string title;
   string producer;
   vector<string> genres;
   vector<string> directors;
   vector<string> writers;
   vector<string> actors;
   vector<string> descriptions;
   Movie operator=(const Output&) = delete;

};