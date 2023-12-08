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
    string getDirectorsTest() const;
    string getWritersTest() const;
    string getActorsTest() const;
    string getDescriptionsTest() const;


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
    string sortCSVTest();


    //Quiz
    string quizAlgoTest();
    string getQuizTest();
    string q1PointsTest();
    string q2PointsTest();
    string q3PointsTest();
    string q4PointsTest();
    string q5PointsTest();


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
    string randomAlgoTest();


    //Result
    string quizResultTest();
    string similarResultTest();
    string filterResultTest();
    string randomResultTest();


    //Input
    string getMenuTest();
    string getSearchTest();
    string getSimilarTest();
    string getFilterTest();

 private:

    Tests operator=(const Tests&) = delete;

};
