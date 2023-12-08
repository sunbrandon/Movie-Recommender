#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Output.h"
#include "Movie.h"
#include "Sort.h"

using namespace std;

class Quiz : public Output, public Sort {
 public:

  Quiz();
  ~Quiz();
  vector<Movie> quizAlgo(vector<Movie> &);
  vector<string> getQuiz();
  void q1Points(vector<Movie> &, string choice);
  void q2Points(vector<Movie> &, string choice);
  void q3Points(vector<Movie> &, string choice);
  void q4Points(vector<Movie> &, string choice);
  void q5Points(vector<Movie> &, string choice);
  
 private:
    
  Quiz operator=(const Quiz&) = delete;
  vector<unsigned> points;
  
};