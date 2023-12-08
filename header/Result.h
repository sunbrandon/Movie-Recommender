#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "Search.h"
#include "Quiz.h"
#include "Random.h"

using namespace std;

class Result : public Search, public Quiz, public Random {
 public:

  Result();
  ~Result();
  void quizResult(vector <Movie>&);
  void similarResult(vector <Movie>&, string);
  void filterResult(vector <Movie>&, vector <string>&);
  void randomResult(Movie);
  
 private:

  Result operator=(const Result&) = delete;

};