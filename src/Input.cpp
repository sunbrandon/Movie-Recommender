#include "../header/Input.h"
#include "../header/Output.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

Input::Input() {
    choice = '\0';
    similarIn = "";
}

Input::~Input() {}

void Input::getMenu() {
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

char Input::getSearch() {
    char input;
    searchChoiceOut();

    do {
        cin >> input;
        cout << endl;
    } while (input != 'a' & input != 'b' & input != 'c');

    if (input == 'a') {
        cout << "Implement similar search option" << endl;
    }
    else if (input == 'b') {
        cout << "Implement filter search option" << endl;
    }
    else if (input == 'c') {
        cout << "Implement return to menu option" << endl;
    }

    return input;
}

string Input::getSimilar() {
    similarOut();

    unsigned int stringLength = this->similarIn.length();

    getline(cin, this->similarIn);

    for (int i = 0; i < stringLength; i++) {
        this->similarIn.at(i) = toupper(this->similarIn.at(i));
    }

    return similarIn;
}

vector<string> Input::getFilter() {
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
    
    if (genreInput == "1") {
            genreInput = "Action";
        }
        else if (genreInput == "2") {
            genreInput = "Adventure";
        }
        else if (genreInput == "3") {
            genreInput = "Animation";
        }
        else if (genreInput == "4") {
            genreInput = "Biography";
        }
        else if (genreInput == "5") {
            genreInput = "Comedy";
        }
        else if (genreInput == "6") {
            genreInput = "Crime";
        }
        else if (genreInput == "7") {
            genreInput = "Drama";
        }
        else if (genreInput == "8") {
            genreInput = "Family";
        }
        else if (genreInput == "9") {
            genreInput = "Fantasy";
        }
        else if (genreInput == "10") {
            genreInput = "Film-Noir";
        }
        else if (genreInput == "11") {
            genreInput = "History";
        }
        else if (genreInput == "12") {
            genreInput = "Horror";
        }
        else if (genreInput == "13") {
            genreInput = "Music";
        }
        else if (genreInput == "14") {
            genreInput = "Musical";
        }
        else if (genreInput == "15") {
            genreInput = "Mystery";
        }
        else if (genreInput == "16") {
            genreInput = "Romance";
        }
        else if (genreInput == "17") {
            genreInput = "Sci-Fi";
        }
        else if (genreInput == "18") {
            genreInput = "Thriller";
        }
        else if (genreInput == "19") {
            genreInput = "War";
        }
        else if (genreInput == "20") {
            genreInput = "Western";
        }

    this->filterIn.push_back(genreInput);
    
    filterOutYear();
    do {
        cin >> yearInput;
    }
    while (yearInput != "a" & yearInput != "b" & yearInput != "c" & yearInput != "d" & yearInput != "e");

    this->filterIn.push_back(yearInput);

    filterOutDuration();
    do {
        cin >> durationInput;
    }
    while (durationInput != "a" & durationInput != "b" & durationInput != "c" & durationInput != "d" & durationInput != "e" & durationInput != "f");

    this->filterIn.push_back(durationInput);
    
    filterOutRating();
    do {
        cin >> ratingInput;
    }
    while (ratingInput != "a" & ratingInput != "b" & ratingInput != "c" & ratingInput != "d" & ratingInput != "e" & ratingInput != "f" & ratingInput != "g");

    this->filterIn.push_back(ratingInput);

    filterOutPopularity();
    do {
        cin >> popularityInput;
    }
    while (popularityInput != "a" & popularityInput != "b" & popularityInput != "c" & popularityInput != "d" & popularityInput != "e");

    this->filterIn.push_back(popularityInput);

    return this->filterIn;
}


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
    quizInputs.push_back(questionInput1);

    questionOut2();
    do {
        cin >> questionInput2;
    }
    while (questionInput2 != 'a' & questionInput2 != 'b' & questionInput2 != 'c' & questionInput2 != 'd');
    quizInputs.push_back(questionInput2);

    questionOut3();
    do {
        cin >> questionInput3;
    }
    while (questionInput3 != 'a' & questionInput3 != 'b' & questionInput3 != 'c' & questionInput3 != 'd');
    quizInputs.push_back(questionInput3);

    questionOut4();
    do {
        cin >> questionInput4;
    }
    while (questionInput4 != 'a' & questionInput4 != 'b' & questionInput4 != 'c' & questionInput4 != 'd');
    quizInputs.push_back(questionInput4);

    questionOut5();
    do {
        cin >> questionInput5;
    }
    while (questionInput5 != 'a' & questionInput5 != 'b' & questionInput5 != 'c' & questionInput5 != 'd');
    quizInputs.push_back(questionInput5);

    return quizInputs;
}