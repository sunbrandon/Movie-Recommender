#include <iostream>
#include <cstdlib>
#include "gtest/gtest.h"
#include "../header/Tests.h"

using namespace std;

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