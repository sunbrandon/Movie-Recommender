#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Input.h"
#include "Movie.h"
#include "Sort.h"

using namespace std;

class Search : public Input, public Sort {
 public:

    Search();
    ~Search();
    vector<unsigned> getPoints();
    vector<Movie> simlarAlgo(vector<Movie> &sortedList);
    vector<Movie> filterAlgo();
    void searchSimilarPoints(string, vector<Movie> &);
    void genreFilterPoints();
    void yearFilterPoints();
    void durationFilterPoints();
    void ratingFilterPoints();
    void voteFilterPoints();
  
 private:

    Search operator=(const Output&) = delete;
    vector<unsigned> points;

};