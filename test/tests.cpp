#include <iostream>
#include <cstdlib>
#include "gtest/gtest.h"
#include "../header/Tests.h"

using namespace std;

// MOVIE TESTS
TEST(MovieTests, setYearTest) {
    Tests *t = new Tests();
    string result = t->setYearTest();
    delete t;
    EXPECT_EQ(result, "Covered: setYear();");
}

TEST(MovieTests, setNumOfVotesTest) {
    Tests *t = new Tests();
    string result = t->setNumOfVotesTest();
    delete t;
    EXPECT_EQ(result, "Covered: setNumOfVotes();");
}

TEST(MovieTests, setDurationTest) {
    Tests *t = new Tests();
    string result = t->setDurationTest();
    delete t;
    EXPECT_EQ(result, "Covered: setDuration();");
}

TEST(MovieTests, setRatingTest) {
    Tests *t = new Tests();
    string result = t->setRatingTest();
    delete t;
    EXPECT_EQ(result, "Covered: setRating();");
}

TEST(MovieTests, setTitleTest) {
    Tests *t = new Tests();
    string result = t->setTitleTest();
    delete t;
    EXPECT_EQ(result, "Covered: setTitle();");
}

TEST(MovieTests, setProductionTest) {
    Tests *t = new Tests();
    string result = t->setProductionTest();
    delete t;
    EXPECT_EQ(result, "Covered: setProduction();");
}

TEST(MovieTests, setMovieIDTest) {
    Tests *t = new Tests();
    string result = t->setMovieIDTest();
    delete t;
    EXPECT_EQ(result, "Covered: setMovieID();");
}

TEST(MovieTests, setGenresTest) {
    Tests *t = new Tests();
    string result = t->setGenresTest();
    delete t;
    EXPECT_EQ(result, "Covered: setGenres();");
}

TEST(MovieTests, setDirectorsTest) {
    Tests *t = new Tests();
    string result = t->setDirectorsTest();
    delete t;
    EXPECT_EQ(result, "Covered: setDirectors();");
}

TEST(MovieTests, setWritersTest) {
    Tests *t = new Tests();
    string result = t->setWritersTest();
    delete t;
    EXPECT_EQ(result, "Covered: setWriters();");
}

TEST(MovieTests, setActorsTest) {
    Tests *t = new Tests();
    string result = t->setActorsTest();
    delete t;
    EXPECT_EQ(result, "Covered: setActors();");
}

TEST(MovieTests, setDescriptionsTest) {
    Tests *t = new Tests();
    string result = t->setDescriptionsTest();
    delete t;
    EXPECT_EQ(result, "Covered: setDescriptions();");
}

TEST(MovieTests, getYearTest) {
    Tests *t = new Tests();
    string result = t->getYearTest();
    delete t;
    EXPECT_EQ(result, "Covered: getYear();");
}

TEST(MovieTests, getNumOfVotesTest) {
    Tests *t = new Tests();
    string result = t->getNumOfVotesTest();
    delete t;
    EXPECT_EQ(result, "Covered: getNumOfVotes();");
}

TEST(MovieTests, getDurationTest) {
    Tests *t = new Tests();
    string result = t->getDurationTest();
    delete t;
    EXPECT_EQ(result, "Covered: getDuration();");
}

TEST(MovieTests, getRatingTest) {
    Tests *t = new Tests();
    string result = t->getRatingTest();
    delete t;
    EXPECT_EQ(result, "Covered: getRating();");
}

TEST(MovieTests, getTitleTest) {
    Tests *t = new Tests();
    string result = t->getTitleTest();
    delete t;
    EXPECT_EQ(result, "Covered: getTitle();");
}

TEST(MovieTests, getProductionTest) {
    Tests *t = new Tests();
    string result = t->getProductionTest();
    delete t;
    EXPECT_EQ(result, "Covered: getProduction();");
}

TEST(MovieTests, getMovieIDTest) {
    Tests *t = new Tests();
    string result = t->getMovieIDTest();
    delete t;
    EXPECT_EQ(result, "Covered: getMovieID();");
}

TEST(MovieTests, getGenresTest) {
    Tests *t = new Tests();
    string result = t->getGenresTest();
    delete t;
    EXPECT_EQ(result, "Covered: getGenres();");
}

TEST(MovieTests, getDirectorsTest) {
    Tests *t = new Tests();
    string result = t->getDirectorsTest();
    delete t;
    EXPECT_EQ(result, "Covered: getDirectors();");
}

TEST(MovieTests, getWritersTest) {
    Tests *t = new Tests();
    string result = t->getWritersTest();
    delete t;
    EXPECT_EQ(result, "Covered: getWriters();");
}

TEST(MovieTests, getActorsTest) {
    Tests *t = new Tests();
    string result = t->getActorsTest();
    delete t;
    EXPECT_EQ(result, "Covered: getActors();");
}

TEST(MovieTests, getDescriptionsTest) {
    Tests *t = new Tests();
    string result = t->getDescriptionsTest();
    delete t;
    EXPECT_EQ(result, "Covered: getDescriptions();");
}


// OUTPUT TESTS
TEST(OutputTests, TestOutputMenu) {
    Tests *t = new Tests();
    string result = t->outputMenuTest();
    delete t;
    EXPECT_EQ(result, "Covered: outputMenu()");
}

TEST(OutputTests, TestQuestionOut1) {
    Tests *t = new Tests();
    string result = t->questionOut1Test();
    delete t;
    EXPECT_EQ(result, "Covered: questionOut1()");
}

TEST(OutputTests, TestQuestionOut2) {
    Tests *t = new Tests();
    string result = t->questionOut2Test();
    delete t;
    EXPECT_EQ(result, "Covered: questionOut2()");
}

TEST(OutputTests, TestQuestionOut3) {
    Tests *t = new Tests();
    string result = t->questionOut3Test();
    delete t;
    EXPECT_EQ(result, "Covered: questionOut3()");
}

TEST(OutputTests, TestQuestionOut4) {
    Tests *t = new Tests();
    string result = t->questionOut4Test();
    delete t;
    EXPECT_EQ(result, "Covered: questionOut4()");
}

TEST(OutputTests, TestQuestionOut5) {
    Tests *t = new Tests();
    string result = t->questionOut5Test();
    delete t;
    EXPECT_EQ(result, "Covered: questionOut5()");
}

TEST(OutputTests, TestSearchChoiceOut) {
    Tests *t = new Tests();
    string result = t->searchChoiceOutTest();
    delete t;
    EXPECT_EQ(result, "Covered: searchChoiceOut()");
}

TEST(OutputTests, TestSimilarOut) {
    Tests *t = new Tests();
    string result = t->similarOutTest();
    delete t;
    EXPECT_EQ(result, "Covered: similarOut()");
}

TEST(OutputTests, TestFilterOutGenre) {
    Tests *t = new Tests();
    string result = t->filterOutGenreTest();
    delete t;
    EXPECT_EQ(result, "Covered: filterOutGenre()");
}

TEST(OutputTests, TestFilterOutYear) {
    Tests *t = new Tests();
    string result = t->filterOutYearTest();
    delete t;
    EXPECT_EQ(result, "Covered: filterOutYear()");
}

TEST(OutputTests, TestFilterOutDuration) {
    Tests *t = new Tests();
    string result = t->filterOutDurationTest();
    delete t;
    EXPECT_EQ(result, "Covered: filterOutDuration()");
}

TEST(OutputTests, TestFilterOutRating) {
    Tests *t = new Tests();
    string result = t->filterOutRatingTest();
    delete t;
    EXPECT_EQ(result, "Covered: filterOutRating()");
}

TEST(OutputTests, TestFilterOutPopularity) {
    Tests *t = new Tests();
    string result = t->filterOutPopularityTest();
    delete t;
    EXPECT_EQ(result, "Covered: filterOutPopularity()");
}


// SORT TESTS
TEST (SortTests, sortCSVTest) {
    Tests *t = new Tests();
    string result = t->sortCSVTest();
    delete t;
    EXPECT_EQ(result, "Covered: sortCSV();");
}


// QUIZ TESTS
TEST(QuizTests, TestQuizAlgo) {
    Tests *t = new Tests();
    string result = t->quizAlgoTest();
    delete t;
    EXPECT_EQ(result, "Covered: quizAlgo()");
}

TEST(QuizTests, TestGetQuiz) {
    Tests *t = new Tests();
    string result = t->getQuizTest();
    delete t;
    EXPECT_EQ(result, "Covered: getQuiz()");
}

TEST(QuizTests, TestQ1Points) {
    Tests *t = new Tests();
    string result = t->q1PointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: q1Points()");
}

TEST(QuizTests, TestQ2Points) {
    Tests *t = new Tests();
    string result = t->q2PointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: q2Points()");
}

TEST(QuizTests, TestQ3Points) {
    Tests *t = new Tests();
    string result = t->q3PointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: q3Points()");
}

TEST(QuizTests, TestQ4Points) {
    Tests *t = new Tests();
    string result = t->q4PointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: q4Points()");
}

TEST(QuizTests, TestQ5Points) {
    Tests *t = new Tests();
    string result = t->q5PointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: q5Points()");
}


// SEARCH TESTS
TEST(SearchTests, TestGetPoints) {
    Tests *t = new Tests();
    string result = t->getPointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: getPoints()");
}

TEST(SearchTests, TestSimilarAlgo) {
    Tests *t = new Tests();
    string result = t->similarAlgoTest();
    delete t;
    EXPECT_EQ(result, "Covered: similarAlgo()");
}

TEST(SearchTests, TestFilterAlgo) {
    Tests *t = new Tests();
    string result = t->filterAlgoTest();
    delete t;
    EXPECT_EQ(result, "Covered: filterAlgo()");
}

TEST(SearchTests, TestSimilarPoints) {
    Tests *t = new Tests();
    string result = t->searchSimilarPointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: searchSimilarPoints()");
}

TEST(SearchTests, TestGenrePoints) {
    Tests *t = new Tests();
    string result = t->genreFilterPointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: genreFilterPoints()");
}

TEST(SearchTests, TestYearFilterPoints) {
    Tests *t = new Tests();
    string result = t->yearFilterPointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: yearFilterPoints()");
}

TEST(SearchTests, TestDurationFilterPoints) {
    Tests *t = new Tests();
    string result = t->durationFilterPointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: durationFilterPoints()");
}

TEST(SearchTests, TestRatingFilterPoints) {
    Tests *t = new Tests();
    string result = t->ratingFilterPointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: ratingFilterPoints()");
}

TEST(SearchTests, TestVoteFilterPoints) {
    Tests *t = new Tests();
    string result = t->voteFilterPointsTest();
    delete t;
    EXPECT_EQ(result, "Covered: voteFilterPoints()");
}


// RANDOM TESTS
TEST(RandomTests, TestRandomAlgo) {
    Tests *t = new Tests();
    string result = t->randomAlgoTest();
    delete t;
    EXPECT_EQ(result, "Covered: randomAlgo()");
}


// RESULT TESTS
TEST(ResultTests, TestQuizResult) {
    Tests *t = new Tests();
    string result = t->quizResultTest();
    delete t;
    EXPECT_EQ(result, "Covered: quizResult()");
}

TEST(ResultTests, TestSimilarResult) {
    Tests *t = new Tests();
    string result = t->similarResultTest();
    delete t;
    EXPECT_EQ(result, "Covered: similarResult()");
}

TEST(ResultTests, TestFilterResult) {
    Tests *t = new Tests();
    string result = t->filterResultTest();
    delete t;
    EXPECT_EQ(result, "Covered: filterResult()");
}

TEST(ResultTests, TestRandomResult) {
    Tests *t = new Tests();
    string result = t->randomResultTest();
    delete t;
    EXPECT_EQ(result, "Covered: randomResult()");
}


// INPUT TESTS
TEST(InputTests, TestGetMenu) {
    Tests *t = new Tests();
    string result = t->getMenuTest();
    delete t;
    EXPECT_EQ(result, "Covered: getMenu()");
}

TEST(InputTests, TestGetSearch) {
    Tests *t = new Tests();
    string result = t->getSearchTest();
    delete t;
    EXPECT_EQ(result, "Covered: getSearch()");
}

TEST(InputTests, TestGetSimilar) {
    Tests *t = new Tests();
    string result = t->getSimilarTest();
    delete t;
    EXPECT_EQ(result, "Covered: getSimilar()");
}

TEST(InputTests, TestGetFilter) {
    Tests *t = new Tests();
    string result = t->getFilterTest();
    delete t;
    EXPECT_EQ(result, "Covered: getFilter()");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}