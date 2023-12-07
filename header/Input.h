#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Result.h"

using namespace std;

class Input : public Result {
 public:

  Input();
  ~Input();
  void getMenu(vector<Movie>&);
  char getSearch();
  string getSimilar();
  vector<string> getFilter();
  
 private:

  char choice;
  string similarIn;
  vector<string> filterIn;
  vector<char> questionIn;
  Input operator=(const Input&) = delete;
   
};