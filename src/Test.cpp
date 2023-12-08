#include "../header/Test.h"

using namespace std;

Test::Test() {}
Test::~Test() {}

//Movie
string Test::setYearTest(int year) {}
string Test::setNumOfVotesTest(int votes) {}
string Test::setDurationTest(int duration) {}

string Test::setRatingTest(double rating) {}

string Test::setTitleTest(string title) {}
string Test::setProductionTest(string production) {}
string Test::setMovieIDTest(string movieID) {}

string Test::setGenresTest(vector<string>& genre) {}
string Test::setDirectorsTest(vector<string>& directors) {}
string Test::setWritersTest(vector<string>& writers) {}
string Test::setActorsTest(vector<string>& actors) {}
string Test::setDescriptionsTest(vector<string>& description) {}

int Test::getYearTest() const {}
int Test::getNumOfVotesTest() const {}
int Test::getDurationTest() const {}

double Test::getRatingTest() const {}

string Test::getTitleTest() const {}
string Test::getProductionTest() const {}
string Test::getMovieIDTest() const {}

vector<string> Test::getGenresTest() const {}
vector<string> Test::getDirectorsTest() const {}
vector<string> Test::getWritersTest() const {}
vector<string> Test::getActorsTest() const {}
vector<string> Test::getDescriptionsTest() const {}


//Output
string Test::outputMenuTest() {}
string Test::questionOut1Test() {}
string Test::questionOut2Test() {}
string Test::questionOut3Test() {}
string Test::questionOut4Test() {}
string Test::questionOut5Test() {}
string Test::searchChoiceOutTest() {}
string Test::similarOutTest() {}
string Test::filterOutGenreTest() {}
string Test::filterOutYearTest() {}
string Test::filterOutDurationTest() {}
string Test::filterOutRatingTest() {}
string Test::filterOutPopularityTest() {}


//Sort
vector<Movie> Test::sortCSVTest() {}


//Quiz
vector<Movie> Test::quizAlgoTest(vector<Movie> &) {}
vector<string> Test::getQuizTest() {}
string Test::q1PointsTest(vector<Movie> &, string choice) {}
string Test::q2PointsTest(vector<Movie> &, string choice) {}
string Test::q3PointsTest(vector<Movie> &, string choice) {}
string Test::q4PointsTest(vector<Movie> &, string choice) {}
string Test::q5PointsTest(vector<Movie> &, string choice) {}


//Search
vector<Movie> Test::similarAlgoTest(vector<Movie>&, string) {}
vector<Movie> Test::filterAlgoTest(vector<Movie>&, vector<string>&) {}
string Test::searchSimilarPointsTest(string, vector<Movie>&) {}
string Test::genreFilterPointsTest(vector<Movie>&, vector<string>&) {}
string Test::yearFilterPointsTest(vector<Movie>&, vector<string>&) {}
string Test::durationFilterPointsTest(vector<Movie>&, vector<string>&) {}
string Test::ratingFilterPointsTest(vector<Movie>&, vector<string>&) {}
string Test::voteFilterPointsTest(vector<Movie>&, vector<string>&) {}


//Random
Movie Test::randomAlgoTest(vector <Movie>& sortedList) {}


//Result
string Test::quizResultTest(vector <Movie>&) {}
string Test::similarResultTest(vector <Movie>&, string) {}
string Test::filterResultTest(vector <Movie>&, vector <string>&) {}
string Test::randomResultTest(Movie) {}