#include "../header/Menu.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Menu::Menu() {}

Menu::~Menu() {}

void Menu::outputMenu() {
    cout << "WELCOME TO THE MOVIE RECOMMENDER!" << endl;
    cout << "Please select your option from the list." << endl;
    cout << "1. Surprise" << endl;
    cout << "q. Exit" << endl;
    cout << endl;
}

void Menu::surpriseResult() {
    srand(time(NULL));
    int movie = (rand() % 500) + 1;
    cout << "Try watching this movie: " << endl;
    cout << endl;
    cout << "- " << movie << endl;
    cout << endl;
    cout << "a. Try again" << endl;
    cout << "b. Exit" << endl;
    cout << endl;
}

void Menu::selectChoice() {
    outputMenu();
    cout << "Enter an option: ";
    cin >> choice;
    cout << endl;
    while (choice != 'q') {
        if (choice == '1') {
            surpriseResult();
            cout << "Enter an option: ";
            cin >> choice;
            cout << endl;
        }
        if (choice == 'b') {
            selectChoice();
        }
    }
}