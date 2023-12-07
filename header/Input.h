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
  void getSearch(vector<Movie>&);
  string getSimilar();
  vector<string> getFilter();
  
 private:

  char choice;
  string similarIn;
  vector<string> filterIn;
  vector<char> questionIn;
  Input operator=(const Input&) = delete;
   
};