#pragma once
#include "Input.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

class Test : public Input {
 public:

    Test();
    ~Test();


    //Movie
    string setYearTest(int year);
    string setNumOfVotesTest(int votes);
    string setDurationTest(int duration);

    string setRatingTest(double rating);

    string setTitleTest(string title);
    string setProductionTest(string production);
    string setMovieIDTest(string movieID);

    string setGenresTest(vector<string>& genre);
    string setDirectorsTest(vector<string>& directors);
    string setWritersTest(vector<string>& writers);
    string setActorsTest(vector<string>& actors);
    string setDescriptionsTest(vector<string>& description);

    int getYearTest() const;
    int getNumOfVotesTest() const;
    int getDurationTest() const;

    double getRatingTest() const;

    string getTitleTest() const;
    string getProductionTest() const;
    string getMovieIDTest() const;

    vector<string> getGenresTest() const;
    vector<string> getDirectorsTest() const;
    vector<string> getWritersTest() const;
    vector<string> getActorsTest() const;
    vector<string> getDescriptionsTest() const;


    //Output
    string outputMenuTest();
    string questionOut1Test();
    string questionOut2Test();
    string questionOut3Test();
    string questionOut4Test();
    string questionOut5Test();
    string searchChoiceOutTest();
    string similarOutTest();
    string filterOutGenreTest();
    string filterOutYearTest();
    string filterOutDurationTest();
    string filterOutRatingTest();
    string filterOutPopularityTest();


    //Sort
    vector<Movie> sortCSVTest();


    //Quiz
    vector<Movie> quizAlgoTest(vector<Movie> &);
    vector<string> getQuizTest();
    string q1PointsTest(vector<Movie> &, string choice);
    string q2PointsTest(vector<Movie> &, string choice);
    string q3PointsTest(vector<Movie> &, string choice);
    string q4PointsTest(vector<Movie> &, string choice);
    string q5PointsTest(vector<Movie> &, string choice);


    //Search
    vector<Movie> similarAlgoTest(vector<Movie>&, string);
    vector<Movie> filterAlgoTest(vector<Movie>&, vector<string>&);
    string searchSimilarPointsTest(string, vector<Movie>&);
    string genreFilterPointsTest(vector<Movie>&, vector<string>&);
    string yearFilterPointsTest(vector<Movie>&, vector<string>&);
    string durationFilterPointsTest(vector<Movie>&, vector<string>&);
    string ratingFilterPointsTest(vector<Movie>&, vector<string>&);
    string voteFilterPointsTest(vector<Movie>&, vector<string>&);


    //Random
    Movie randomAlgoTest(vector <Movie>& sortedList);


    //Result
    string quizResultTest(vector <Movie>&);
    string similarResultTest(vector <Movie>&, string);
    string filterResultTest(vector <Movie>&, vector <string>&);
    string randomResultTest(Movie);

 private:

    Test operator=(const Test&) = delete;

};