#include <iostream>
#include <cstdlib>
#include "../header/Menu.h"

using namespace std;

// void outputMenu() {
//     cout << "WELCOME TO THE MOVIE RECOMMENDER!" << endl;
//     cout << "Please select your option from the list." << endl;
//     cout << "s. Surprise" << endl;
//     cout << "q. Exit" << endl;
//     cout << endl;
//     cout << "Choice: ";
// }

// void surpriseResult() {
//     srand(time(NULL));
//     int movie = (rand() % 500) + 1;

//     cout << "Try watching this movie:" << endl;
//     cout << endl;
//     cout << movie << endl;
//     cout << endl;
//     cout << "a. Try again" << endl;
//     cout << "b. Exit" << endl;
//     cout << endl;
// }

int main() {

    Menu* m = new Menu();

    m->selectChoice();

    delete m;

    return 0;
}