#include "../header/Output.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Output::Output() {}

Output::~Output() {}

void Output::outputMenu() {}

void Output::questionOut1() {}

void Output::questionOut2() {}

void Output::questionOut3() {}

void Output::questionOut4() {}

void Output::questionOut5() {}

void Output::searchChoiceOut() {
    cout << "Select which search to use:" << endl;
    cout << endl;
    cout << "a. Search Similar" << endl;
    cout << "b. Search Filter" << endl;
    cout << "c. Back" << endl;
    cout << endl;
}

void Output::similarOut() {}

void Output::filterOut() {}