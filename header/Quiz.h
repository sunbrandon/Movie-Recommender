#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Input.h"
#include "Movie.h"

using namespace std;

class Quiz : public Input, public Sort {
 public:

    Quiz();
    ~Quiz();
    vector<Movie> quizAlgo();
    void q1Points(char choice);
    void q2Points(char choice);
    void q3Points(char choice);
    void q4Points(char choice);
    void q5Points(char choice);
  
 private:

    Quiz operator=(const Output&) = delete;
    vector <unsigned int> points;

};