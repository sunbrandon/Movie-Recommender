#include "../header/Input.h"
#include "../header/Output.h"
#include "../header/Random.h"
#include "../header/Movie.h"
#include "../header/Result.h"
#include "../header/Sort.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

Input::Input() {
    choice = '\0';
    similarIn = "";
    for (unsigned i = 0; i < 5; ++i) {
        this->filterIn.push_back("");
    }
}

Input::~Input() {}

void Input::getMenu(vector<Movie>& sortedList) {
    string input;

    cout << endl;
    cout << "WELCOME TO THE MOVIE RECOMMENDER!" << endl;
    cout << endl;

    outputMenu();

    do {
        cin >> input;
        cout << endl;
        while (input != "1" & input != "2" & input != "3" & input != "q") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> input;
            cout << endl;
        }
        if (input == "1") {
            getSearch(sortedList);
          
            cout << endl;
            outputMenu();
        }
        else if (input == "2") {
            quizResult(sortedList);

            cout << endl;
            outputMenu();
        }
        else if (input == "3") {
            randomResult(randomAlgo(sortedList));
            
            cout << endl;
            outputMenu();
        }
    }
    while (input != "q");
}

void Input::getSearch(vector<Movie>& sortedList) {
    string input = "";

    cout << endl;

    searchChoiceOut();

    do {
        cin >> input;
        cout << endl;
        while (input != "a" & input != "b" & input != "c") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> input;
            cout << endl;
        }
    } while (input != "a" & input != "b" & input != "c");

    if (input == "a") {
        cin.ignore();
        similarResult(sortedList, getSimilar());
    }
    else if (input == "b") {
        getFilter();
        filterResult(sortedList, this->filterIn);
    }
    else if (input == "c") {
        cout << "Returning to menu..." << endl;
    }
}

string Input::getSimilar() {
    similarOut();

    unsigned int stringLength = this->similarIn.length();
    
    getline(cin, this->similarIn);

    for (int i = 0; i < stringLength; i++) {
        this->similarIn.at(i) = toupper(this->similarIn.at(i));
    }

    string similar = this->similarIn;
    this->similarIn = "";

    return similar;
}

vector<string> Input::getFilter() {
    string genreInput;
    string yearInput;
    string durationInput;
    string ratingInput;
    string popularityInput;

    filterOutGenre();
    do { 
        cin >> genreInput;
        cout << endl;
        while (genreInput != "1" & genreInput != "2" & genreInput != "3" & genreInput != "4" & genreInput != "5" & 
            genreInput != "6" & genreInput != "7" & genreInput != "8" & genreInput != "9" & genreInput != "10" & 
            genreInput != "11" & genreInput != "12" & genreInput != "13" & genreInput != "14" & genreInput != "15" & 
            genreInput != "16" & genreInput != "17" & genreInput != "18" & genreInput != "19" & genreInput != "20") {
                cout << "Invalid input, please try again." << endl;
                cout << endl;
                cin >> genreInput;
                cout << endl;
        }
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

    this->filterIn.at(0) = genreInput;
    
    filterOutYear();
    do {
        cin >> yearInput;
        cout << endl;
        while (yearInput != "a" & yearInput != "b" & yearInput != "c" & yearInput != "d" & yearInput != "e") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> yearInput;
            cout << endl;
        }
    }
    while (yearInput != "a" & yearInput != "b" & yearInput != "c" & yearInput != "d" & yearInput != "e");

    this->filterIn.at(1) = yearInput;

    filterOutDuration();
    do {
        cin >> durationInput;
        cout << endl;
        while (durationInput != "a" & durationInput != "b" & durationInput != "c" & durationInput != "d" & durationInput != "e" & durationInput != "f") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> durationInput;
            cout << endl;
        }
    }
    while (durationInput != "a" & durationInput != "b" & durationInput != "c" & durationInput != "d" & durationInput != "e" & durationInput != "f");

    this->filterIn.at(2) = durationInput;
    
    filterOutRating();
    do {
        cin >> ratingInput;
        cout << endl;
        while (ratingInput != "a" & ratingInput != "b" & ratingInput != "c" & ratingInput != "d" & ratingInput != "e" & ratingInput != "f" & ratingInput != "g") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> ratingInput;
            cout << endl;
        }
    }
    while (ratingInput != "a" & ratingInput != "b" & ratingInput != "c" & ratingInput != "d" & ratingInput != "e" & ratingInput != "f" & ratingInput != "g");

    this->filterIn.at(3) = ratingInput;

    filterOutPopularity();
    do {
        cin >> popularityInput;
        cout << endl;
        while (popularityInput != "a" & popularityInput != "b" & popularityInput != "c" & popularityInput != "d" & popularityInput != "e") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> popularityInput;
            cout << endl;
        }
    }
    while (popularityInput != "a" & popularityInput != "b" & popularityInput != "c" & popularityInput != "d" & popularityInput != "e");

    this->filterIn.at(4) = popularityInput;

    return this->filterIn;
}