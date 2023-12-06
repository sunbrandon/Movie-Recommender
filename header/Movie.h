#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class Movie {
 public:

  Movie();
  Movie(string movieID, string title, int year, vector<string> genres, int duration, vector<string> directors, vector<string> writers, string production, vector<string> actors, vector<string> descriptions, double rating, int numOfVotes);
  ~Movie();

  // setter functions
  void setYear(int year);
  void setNumOfVotes(int votes);
  void setDuration(int duration);

  void setRating(double rating);
  
  void setTitle(string title);
  void setProduction(string production);
  void setMovieID(string movieID);

  void setGenres(vector<string>& genre);
  void setDirectors(vector<string>& directors);
  void setWriters(vector<string>& writers);
  void setActors(vector<string>& actors);
  void setDescriptions(vector<string>& description);


  // getter functions
  int getYear() const;
  int getNumOfVotes() const;
  int getDuration() const;

  double getRating() const;
  
  string getTitle() const;
  string getProduction() const;
  string getMovieID() const;

  vector<string> getGenres() const;
  vector<string> getDirectors() const;
  vector<string> getWriters() const;
  vector<string> getActors() const;
  vector<string> getDescriptions() const;

 private:

  int year;
  int numOfVotes;
  int duration;

  double rating;

  string title;
  string production;
  string movieID;

  vector<string> genres;
  vector<string> directors;
  vector<string> writers;
  vector<string> actors;
  vector<string> descriptions;

  //Movie operator=(const Movie&) = delete;

};