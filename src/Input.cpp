#include "../header/Input.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Input::Input() {}

Input::~Input() {}

char Input::getMenu() {}

char Input::getSearch() {}

string Input::getSimilar() {}

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