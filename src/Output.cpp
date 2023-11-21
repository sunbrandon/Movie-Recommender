#include "../header/Output.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Output::Output() {}

Output::~Output() {}

void Output::outputMenu() {
    cout << "WELCOME TO THE MOVIE RECOMMENDER!" << endl;
    cout << endl;
    cout << "Please select your option from the list." << endl;
    cout << endl;
    cout << "1. Search" << endl;
    cout << "2. Quiz" << endl;
    cout << "3. Surprise" << endl;
    cout << "q. Exit" << endl;
    cout << endl;
}

void Output::questionOut1() {
    cout << "Question 1: How are you feeling today?" << endl;
    cout << endl;
    cout << "a. Gloomy" << endl;
    cout << "b. Adventurous" << endl;
    cout << "c. Nostalgic" << endl;
    cout << "d. Romantic" << endl;
    cout << endl;
}

void Output::questionOut2() {
    cout << "Question 2: What is the occassion?" << endl;
    cout << endl;
    cout << "a. Movie Date" << endl;
    cout << "b. By yourself" << endl;
    cout << "c. With friends" << endl;
    cout << "d. With family" << endl;
    cout << endl;
}

void Output::questionOut3() {
    cout << "Question 3: If you had to switch careers today, which would you choose?" << endl;
    cout << endl;
    cout << "a. Computer Hacker" << endl;
    cout << "b. Cop" << endl;
    cout << "c. Drummer" << endl;
    cout << "d. Archaeologist" << endl;
    cout << endl;
}

void Output::questionOut4() {
    cout << "Question 4: What goes through your mind during a good movie?" << endl;
    cout << endl;
    cout << "a. Nothing...I'm too busy laughing" << endl;
    cout << "b. I want to live in their world!" << endl;
    cout << "c. What's going to happen next?" << endl;
    cout << "d. When will this movie end???" << endl;
    cout << endl;
}

void Output::questionOut5() {
    cout << "Question 5: Which option best describes the type of movie you want?" << endl;
    cout << endl;
    cout << "a. A movie I haven't heard much about" << endl;
    cout << "b. A classic" << endl;
    cout << "c. I keep seeing clips and I'm ready to watch the full movie" << endl;
    cout << "d. Everyone thinks it's good" << endl;
    cout << endl;
}

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