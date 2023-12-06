#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Input.h"
#include "Movie.h"
#include "Sort.h"
#include "Search.h"

using namespace std;

class Quiz : public Input, public Sort {
 public:

   Quiz();
   ~Quiz();
   vector<Movie> quizAlgo(vector<Movie> &);
   void q1Points(vector<Movie> &, char choice);
   void q2Points(vector<Movie> &, char choice);
   void q3Points(vector<Movie> &, char choice);
   void q4Points(vector<Movie> &, char choice);
   void q5Points(vector<Movie> &, char choice);
  
 private:
    
   Quiz operator=(const Quiz&) = delete;
   vector<unsigned> points;
};