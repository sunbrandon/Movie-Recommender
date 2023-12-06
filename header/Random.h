#pragma once
#include <iostream>
#include <cstdlib>
#include "Movie.h"
#include "Sort.h"

using namespace std;

class Random : public Sort {
 public:

  Random();
  ~Random();
  Movie randomAlgo(vector <Movie>& sortedList);
  
 private:

   Random operator=(const Random&) = delete;

};