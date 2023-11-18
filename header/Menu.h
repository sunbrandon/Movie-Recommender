#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;

class Menu {
 public:
   Menu();
   ~Menu();
   void outputMenu();
   void selectChoice();
   void surpriseResult();

 private:
   char choice;
};