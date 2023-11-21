#include "../header/Input.h"
#include "../header/Output.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

Input::Input() {}

Input::~Input() {}

char Input::getMenu() {
    char input;
    outputMenu();
        
    cin >> input;
    while(input != '1' || input != '2' || input != '3' || input != 'q') {
        cout << "Invalid input, please try again." << endl;
        cin >> input;
    }

    if (input == '1') {
        cout << "IMPLEMENT: getSearch();" << endl;
    }
    else if (input == '2') {
        cout << "IMPLEMENT: getQuiz();" << endl;
    }
    else if (input == '3') {
        cout << "IMPLEMENT: RANDOM" << endl;
    }
    else if (input == 'q') {
        cout << "IMPLEMENT: EXIT" << endl;
    }
    
}

char Input::getSearch() {}

string Input::getSimilar() {}

vector<string> Input::getFilter() {}

vector<char> Input::getQuiz() {}