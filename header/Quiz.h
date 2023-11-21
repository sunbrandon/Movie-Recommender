#pragma once
#include <iostream>
#include <cstdlib>
#include "Input.h"
#include "Movie.h"

using namespace std;

class Quiz : public Input : public Sort {
 public:

    Quiz();
    ~Quiz();
    vector<Movie> quizAlgo();
  
 private:

    Quiz operator=(const Output&) = delete;

};