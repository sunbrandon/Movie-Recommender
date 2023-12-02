#pragma once
#include <iostream>
#include <cstdlib>
#include "Input.h"
#include "Movie.h"

using namespace std;

class Search : public Input, public Sort {
 public:

    Search();
    ~Search();
    vector<Movie> simlarAlgo();
    vector<Movie> filterAlgo();
  
 private:

    Search operator=(const Output&) = delete;

};