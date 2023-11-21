#include "../header/Output.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Output::Output() {}

Output::~Output() {}

void Output::outputMenu() {
    cout << "WELCOME TO THE MOVIE RECOMMENDER!" << endl;
    cout << endl;
    cout << "Please select your option from the list." << endl;
    cout << endl;
    cout << "1. Search" << endl;
    cout << "2. Quiz" << endl;
    cout << "3. Surprise" << endl;
    cout << "q. Exit" << endl;
    cout << endl;
}

void Output::questionOut1() {}

void Output::questionOut2() {}

void Output::questionOut3() {}

void Output::questionOut4() {}

void Output::questionOut5() {}

void Output::searchChoiceOut() {}

void Output::similarOut() {}

void Output::filterOut() {}