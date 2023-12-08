#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Output.h"
#include "Movie.h"
#include "Sort.h"

using namespace std;

class Search : public Sort {
 public:

  Search();
  ~Search();
  vector<unsigned> getPoints();
  vector<Movie> similarAlgo(vector<Movie>&, string);
  vector<Movie> filterAlgo(vector<Movie>&, vector<string>&);
  void searchSimilarPoints(string, vector<Movie>&);
  void genreFilterPoints(vector<Movie>&, vector<string>&);
  void yearFilterPoints(vector<Movie>&, vector<string>&);
  void durationFilterPoints(vector<Movie>&, vector<string>&);
  void ratingFilterPoints(vector<Movie>&, vector<string>&);
  void voteFilterPoints(vector<Movie>&, vector<string>&);

 private:

  Search operator=(const Search&) = delete;
  vector<unsigned> points;

};