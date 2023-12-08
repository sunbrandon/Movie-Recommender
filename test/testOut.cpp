#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "../header/Input.h"
#include "../header/Movie.h"
#include "../header/Output.h"
#include "../header/Quiz.h"
#include "../header/Random.h"
#include "../header/Result.h"
#include "../header/Search.h"
#include "../header/Sort.h"
#include "../header/Tests.h"

using namespace std;

int main() {
    Sort* s = new Sort();

    vector<Movie> movieVector;

    movieVector = s->sortCSV();

    Input* in = new Input();

    in->getMenu(movieVector);

    delete s;
    delete in;

    // Tests *t = new Tests();

    // cout << "MOVIE TESTS: " << endl;
    // cout << endl;

    // cout << t->setYearTest() << endl;
    // cout << t->setNumOfVotesTest() << endl;
    // cout << t->setDurationTest() << endl;

    // cout << t->setRatingTest() << endl;

    // cout << t->setTitleTest() << endl;
    // cout << t->setProductionTest() << endl;
    // cout << t->setMovieIDTest() << endl;

    // cout << t->setGenresTest() << endl;
    // cout << t->setDirectorsTest() << endl;
    // cout << t->setWritersTest() << endl;
    // cout << t->setActorsTest() << endl;
    // cout << t->setDescriptionsTest() << endl;

    // cout << t->getYearTest() << endl;
    // cout << t->getNumOfVotesTest() << endl;
    // cout << t->getDurationTest() << endl;

    // cout << t->getRatingTest() << endl;

    // cout << t->getTitleTest() << endl;
    // cout << t->getProductionTest() << endl;
    // cout << t->getMovieIDTest() << endl;

    // cout << t->getGenresTest() << endl;
    // cout << t->getDirectorsTest() << endl;
    // cout << t->getWritersTest() << endl;
    // cout << t->getActorsTest() << endl;
    // cout << t->getDescriptionsTest() << endl;

    // cout << endl;

    // cout << "SORT TESTS: " << endl;
    // cout << endl;

    // cout << t->sortCSVTest() << endl;

    // delete t;

    return 0;
}