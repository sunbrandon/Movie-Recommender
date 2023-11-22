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

vector<char> Input::getQuiz() {
    vector<char> quizInputs;
    char questionInput1;
    char questionInput2;
    char questionInput3;
    char questionInput4;
    char questionInput5;

    questionOut1();
    do {
        cin >> questionInput1;
    }
    while (questionInput1 != 'a' & questionInput1 != 'b' & questionInput1 != 'c' & questionInput1 != 'd');
    quizInputs.at(0) = questionInput1;

    questionOut2();
    do {
        cin >> questionInput2;
    }
    while (questionInput2 != 'a' & questionInput2 != 'b' & questionInput2 != 'c' & questionInput2 != 'd');
    quizInputs.at(1) = questionInput2;

    questionOut3();
    do {
        cin >> questionInput3;
    }
    while (questionInput3 != 'a' & questionInput3 != 'b' & questionInput3 != 'c' & questionInput3 != 'd');
    quizInputs.at(2) = questionInput3;

    questionOut4();
    do {
        cin >> questionInput4;
    }
    while (questionInput4 != 'a' & questionInput4 != 'b' & questionInput4 != 'c' & questionInput4 != 'd');
    quizInputs.at(3) = questionInput4;

    questionOut5();
    do {
        cin >> questionInput5;
    }
    while (questionInput5 != 'a' & questionInput5 != 'b' & questionInput5 != 'c' & questionInput5 != 'd');
    quizInputs.at(4) = questionInput5;

    return quizInputs;
}