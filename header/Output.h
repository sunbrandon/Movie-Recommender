#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;

class Output {
 public:

  Output();
  ~Output();
  void outputMenu();
  void questionOut1();
  void questionOut2();
  void questionOut3();
  void questionOut4();
  void questionOut5();
  void searchChoiceOut();
  void similarOut();
  void filterOutGenre();
  void filterOutYear();
  void filterOutDuration();
  void filterOutRating();
  void filterOutPopularity();
 
 private:

  Output operator=(const Output&) = delete;

};