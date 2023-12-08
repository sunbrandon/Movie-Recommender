#include "../header/Quiz.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

Quiz::Quiz() {
    for (unsigned i = 0; i < 100; i++) {
        points.push_back(0);
    }
}

Quiz::~Quiz() {}

vector<Movie> Quiz::quizAlgo(vector<Movie> &sortedList) {
    vector<string> quizInputs = getQuiz();
    q1Points(sortedList, quizInputs.at(0));
    q2Points(sortedList, quizInputs.at(1));
    q3Points(sortedList, quizInputs.at(2));
    q4Points(sortedList, quizInputs.at(3));
    q5Points(sortedList, quizInputs.at(4));

    vector<Movie> quizResult;
    unsigned count = 0;

    unsigned max1 = 0;
    unsigned max2 = 0;
    unsigned max3 = 0;

    unsigned index1 = 0;
    unsigned index2 = 0;
    unsigned index3 = 0;

    for (unsigned i = 0; i < points.size(); i++) {
        if (points.at(i) > max1) {
            max3 = max2;
            index3 = index2;
            max2 = max1;
            index2 = index1;
            max1 = points.at(i);
            index1 = i;
        }
        else if (points.at(i) > max2) {
            max3 = max2;
            index3 = index2;
            max2 = points.at(i);
            index2 = i;
        }
        else if (points.at(i) > max3) {
            max3 = points.at(i);
            index3 = i;
        }
    }

    quizResult.push_back(sortedList.at(index1));
    quizResult.push_back(sortedList.at(index2));
    quizResult.push_back(sortedList.at(index3));

    return quizResult;
}

void Quiz::q1Points(vector<Movie> &sortedList, string choice) {
    if (choice == "a") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Comedy") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "b") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Adventure") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "c") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Animation") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "d") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Romance") {
                    points.at(i) += 2;
                }
            }
        }
    }
}

void Quiz::q2Points(vector<Movie> &sortedList, string choice) {
    if (choice == "a") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Romance") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "b") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Adventure") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "c") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Comedy") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "d") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Action") {
                    points.at(i) += 2;
                }
            }
        }
    }
}

void Quiz::q3Points(vector<Movie> &sortedList, string choice) {
    if (choice == "a") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getTitle() == "The Matrix") {
                points.at(i) += 1;
            }
        }
    }
    else if (choice == "b") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getTitle() == "The Departed") {
                points.at(i) += 1;
            }
        }
    }
    else if (choice == "c") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getTitle() == "Whiplash") {
                points.at(i) += 1;
            }
        }
    }
    else if (choice == "d") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getTitle() == "Raiders of the Lost Ark") {
                points.at(i) += 1;
            }
        }
    }
}

void Quiz::q4Points(vector<Movie> &sortedList, string choice) {
    if (choice == "a") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Comedy") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "b") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Fantasy") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "c") {
        for (unsigned i = 0; i < 100; ++i) {
            for (unsigned j = 0; j < sortedList.at(i).getGenres().size(); j++) {
                if (sortedList.at(i).getGenres().at(j) == "Thriller" || sortedList.at(i).getGenres().at(j) == "Mystery") {
                    points.at(i) += 2;
                }
            }
        }
    }
    else if (choice == "d") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getDuration() < 120) {
                points.at(i) += 2;
            }
        }
    }
}

void Quiz::q5Points(vector<Movie> &sortedList, string choice) {
    if (choice == "a") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getNumOfVotes() < 100000) {
                points.at(i) += 3;
            }
        }
    }
    else if (choice == "b") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getYear() < 2010 && sortedList.at(i).getNumOfVotes() > 150000) {
                points.at(i) += 3;
            }
        }
    }
    else if (choice == "c") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getNumOfVotes() > 1500000) {
                points.at(i) += 3;
            }
        }
    }
    else if (choice == "d") {
        for (unsigned i = 0; i < 100; ++i) {
            if (sortedList.at(i).getNumOfVotes() >= 8.5) {
                points.at(i) += 3;
            }
        }
    }
}

vector<string> Quiz::getQuiz() {
    vector<string> quizInputs;
    string questionInput1;
    string questionInput2;
    string questionInput3;
    string questionInput4;
    string questionInput5;

    questionOut1();
    do {
        cin >> questionInput1;
        cout << endl;
        while (questionInput1 != "a" & questionInput1 != "b" & questionInput1 != "c" & questionInput1 != "d") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> questionInput1;
            cout << endl;
        }
    }
    while (questionInput1 != "a" & questionInput1 != "b" & questionInput1 != "c" & questionInput1 != "d");
    quizInputs.push_back(questionInput1);

    questionOut2();
    do {
        cin >> questionInput2;
        cout << endl;
        while (questionInput2 != "a" & questionInput2 != "b" & questionInput2 != "c" & questionInput2 != "d") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> questionInput2;
            cout << endl;
        }
    }
    while (questionInput2 != "a" & questionInput2 != "b" & questionInput2 != "c" & questionInput2 != "d");
    quizInputs.push_back(questionInput2);

    questionOut3();
    do {
        cin >> questionInput3;
        cout << endl;
        while (questionInput3 != "a" & questionInput3 != "b" & questionInput3 != "c" & questionInput3 != "d") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> questionInput3;
            cout << endl;
        }
    }
    while (questionInput3 != "a" & questionInput3 != "b" & questionInput3 != "c" & questionInput3 != "d");
    quizInputs.push_back(questionInput3);

    questionOut4();
    do {
        cin >> questionInput4;
        cout << endl;
        while (questionInput4 != "a" & questionInput4 != "b" & questionInput4 != "c" & questionInput4 != "d") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> questionInput4;
            cout << endl;
        }
    }
    while (questionInput4 != "a" & questionInput4 != "b" & questionInput4 != "c" & questionInput4 != "d");
    quizInputs.push_back(questionInput4);

    questionOut5();
    do {
        cin >> questionInput5;
        cout << endl;
        while (questionInput5 != "a" & questionInput5 != "b" & questionInput5 != "c" & questionInput5 != "d") {
            cout << "Invalid input, please try again." << endl;
            cout << endl;
            cin >> questionInput5;
            cout << endl;
        }
    }
    while (questionInput5 != "a" & questionInput5 != "b" & questionInput5 != "c" & questionInput5 != "d");
    quizInputs.push_back(questionInput5);

    return quizInputs;
}