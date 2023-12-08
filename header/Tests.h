#pragma once
#include "Input.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

class Tests : public Input {
 public:

    Tests();
    ~Tests();


    //Movie
    string setYearTest();
    string setNumOfVotesTest();
    string setDurationTest();

    string setRatingTest();

    string setTitleTest();
    string setProductionTest();
    string setMovieIDTest();

    string setGenresTest();
    string setDirectorsTest();
    string setWritersTest();
    string setActorsTest();
    string setDescriptionsTest();

    string getYearTest() const;
    string getNumOfVotesTest() const;
    string getDurationTest() const;

    string getRatingTest() const;

    string getTitleTest() const;
    string getProductionTest() const;
    string getMovieIDTest() const;

    string getGenresTest() const;
    string  getDirectorsTest() const;
    string getWritersTest() const;
    string getActorsTest() const;
    string getDescriptionsTest() const;


   //  //Output
   //  string outputMenuTest();
   //  string questionOut1Test();
   //  string questionOut2Test();
   //  string questionOut3Test();
   //  string questionOut4Test();
   //  string questionOut5Test();
   //  string searchChoiceOutTest();
   //  string similarOutTest();
   //  string filterOutGenreTest();
   //  string filterOutYearTest();
   //  string filterOutDurationTest();
   //  string filterOutRatingTest();
   //  string filterOutPopularityTest();


   //  //Sort
   string sortCSVTest();


   //  //Quiz
   //  vector<Movie> quizAlgoTest(vector<Movie> &);
   //  vector<string> getQuizTest();
   //  string q1PointsTest(vector<Movie> &, string choice);
   //  string q2PointsTest(vector<Movie> &, string choice);
   //  string q3PointsTest(vector<Movie> &, string choice);
   //  string q4PointsTest(vector<Movie> &, string choice);
   //  string q5PointsTest(vector<Movie> &, string choice);


    //Search
    string getPointsTest();
    string similarAlgoTest();
    string filterAlgoTest();
    string searchSimilarPointsTest();
    string genreFilterPointsTest();
    string yearFilterPointsTest();
    string durationFilterPointsTest();
    string ratingFilterPointsTest();
    string voteFilterPointsTest();


    //Random
   //  Movie randomAlgoTest(vector <Movie>& sortedList);


   //  //Result
   //  string quizResultTest(vector <Movie>&);
   //  string similarResultTest(vector <Movie>&, string);
   //  string filterResultTest(vector <Movie>&, vector <string>&);
   //  string randomResultTest(Movie);


    //Input
    string getMenuTest();
    string getSearchTest();
    string getSimilarTest();
    string getFilterTest();

 private:

    Tests operator=(const Tests&) = delete;

};