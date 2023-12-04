#include "../header/Quiz.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

Quiz::Quiz() {}

Quiz::~Quiz() {}

vector<Movie> Quiz::quizAlgo() {}

void Quiz::q1Points(char choice) {
    
    if (choice == 'a'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Comedy"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'b'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Adventure"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'c'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Animation"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'd'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Romance"){
                points.at(i) += 2;
            }
        }
    }
}

void Quiz::q2Points(char choice) {

    if (choice == 'a'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Romance"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'b'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Adventure"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'c'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Comedy"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'd'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Action"){
                points.at(i) += 2;
            }
        }
    }
}

void Quiz::q3Points(char choice) {

    if (choice == 'a'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getTitle() == "The Matrix"){
                points.at(i) += 1;
            }
        }
    }
    else if (choice == 'b'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getTitle() == "The Departed"){
                points.at(i) += 1;
            }
        }
    }
    else if (choice == 'c'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getTitle() == "Whiplash"){
                points.at(i) += 1;
            }
        }
    }
    else if (choice == 'd'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getTitle() == "Raiders of the Lost Ark"){
                points.at(i) += 1;
            }
        }
    }
}

void Quiz::q4Points(char choice) {

    if (choice == 'a'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Comedy"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'b'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Fantasy"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'c'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getGenres() == "Thriller" || movie.at(i).getGenres() == "Mystery"){
                points.at(i) += 2;
            }
        }
    }
    else if (choice == 'd'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getDuration() < 120){
                points.at(i) += 2;
            }
        }
    }
}

void Quiz::q5Points(char choice) {

    if (choice == 'a'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getNumOfVotes() < 100000){
                points.at(i) += 3;
            }
        }
    }
    else if (choice == 'b'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getYear() < 2010 && movie.at(i).getNumOfVotes() > 150000){
                points.at(i) += 3;
            }
        }
    }
    else if (choice == 'c'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getNumOfVotes() > 1500000){
                points.at(i) += 3;
            }
        }
    }
    else if (choice == 'd'){
        for (unsigned i = 0; i < 100; ++i){
            if (movie.at(i).getVote() >= 8.5){
                points.at(i) += 3;
            }
        }
    }
}