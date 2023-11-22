#include "../header/Input.h"
#include "../header/Output.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

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

string Input::getSimilar() {
    similarOut();
    string *similarInput = this->similarIn;

    cin >> *similarInput;

    for (int i = 0; i < *similarInput->length(); i++) {
        *similarInput.at(i) = toupper(*similarInput.at(i));
    }

    return similarIn;
}

vector<string> Input::getFilter() {}

vector<char> Input::getQuiz() {
    vector<char> quizInputs;

    questionOut1();
    char questionInput1;
    do {
        cin >> questionInput1;
    }
    while (input != 'a' & input != 'b' & input != 'c' & input != 'd');
    quizInputs.at(0) = questionInput1;

    questionOut2();
    char questionInput2;
    do {
        cin >> questionInput2;
    }
    while (input != 'a' & input != 'b' & input != 'c' & input != 'd');
    quizInputs.at(1) = questionInput2;

    questionOut3();
    char questionInput3;
    do {
        cin >> questionInput3;
    }
    while (input != 'a' & input != 'b' & input != 'c' & input != 'd');
    quizInputs.at(2) = questionInput3;

    questionOut4();
    char questionInput4;
    do {
        cin >> questionInput4;
    }
    while (input != 'a' & input != 'b' & input != 'c' & input != 'd');
    quizInputs.at(3) = questionInput4;

    questionOut5();
    char questionInput5;
    do {
        cin >> questionInput5;
    }
    while (input != 'a' & input != 'b' & input != 'c' & input != 'd');
    quizInputs.at(4) = questionInput5;

    return quizInputs;
}