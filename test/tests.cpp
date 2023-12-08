#include <iostream>
#include <cstdlib>
#include "gtest/gtest.h"
#include "../header/Tests.h"

using namespace std;

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