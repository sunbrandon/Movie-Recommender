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

vector<string> Input::getFilter() {
    vector<string> filterInputs;

    string genreInput;
    string yearInput;
    string durationInput;
    string ratingInput;
    string popularityInput;

    filterOutGenre();
    do { 
        // WOULD THIS WORK?
        // if (genreInput >= "1" && genreInput <= "20") {
        //     cout << "Invalid input, please try again." << endl;  
        // }
        cin >> genreInput;
    }
    while (genreInput != "1" & genreInput != "2" & genreInput != "3" & genreInput != "4" & genreInput != "5" & 
            genreInput != "6" & genreInput != "7" & genreInput != "8" & genreInput != "9" & genreInput != "10" & 
            genreInput != "11" & genreInput != "12" & genreInput != "13" & genreInput != "14" & genreInput != "15" & 
            genreInput != "16" & genreInput != "17" & genreInput != "18" & genreInput != "19" & genreInput != "20"); 
    
    filterInputs.push_back(genreInput);
    
    filterOutYear();
    do {
        cin >> yearInput;
    }
    while (yearInput != "a" & yearInput != "b" & yearInput != "c" & yearInput != "d" & yearInput != "e");

    filterInputs.push_back(yearInput);

    filterOutDuration();
    do {
        cin >> durationInput;
    }
    while (durationInput != "a" & durationInput != "b" & durationInput != "c" & durationInput != "d" & durationInput != "e" & durationInput != "f");

    filterInputs.push(durationInput);
    
    filterOutRating();
    do {
        cin >> ratingInput;
    }
    while (ratingInput != "a" & ratingInput != "b" & ratingInput != "c" & ratingInput != "d" & ratingInput != "e" & ratingInput != "f" & ratingInput != "g");

    filterInput.push(ratingInput);

    filterOutPopularity() {
    do {
        cin >> popularityInput;
    }
    while (popularityInput != "a" & popularityInput != "b" & popularityInput != "c" & popularityInput != "d" & popularityInput != "e");

    filterInputs.push(popularityInput);

    return filterInputs;
    }
}

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