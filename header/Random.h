#pragma once
#include <iostream>
#include <cstdlib>
#include "Input.h"
#include "Movie.h"
#include "Sort.h"

using namespace std;

class Random : public Input, public Sort {
 public:

    Random();
    ~Random();
    Movie randomAlgo();
  
 private:

    Random operator=(const Output&) = delete;

};