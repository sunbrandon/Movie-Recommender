#pragma once
#include <iostream>
#include <cstdlib>
#include "Search.h"
#include "Quiz.h"
#include "Random.h"

using namespace std;

class Result : public Search, public Quiz, public Random {
 public:

    Result();
    ~Result();
    void quizResult();
    void similarResult();
    void filterResult();
    void randomResult();
  
 private:

    Result operator=(const Output&) = delete;

};