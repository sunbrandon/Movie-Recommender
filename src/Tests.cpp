#include "../header/Tests.h"

using namespace std;

Tests::Tests() {}
Tests::~Tests() {}

//Movie
// string Test::setYearTest(int year) {}
// string Test::setNumOfVotesTest(int votes) {}
// string Test::setDurationTest(int duration) {}

// string Test::setRatingTest(double rating) {}

// string Test::setTitleTest(string title) {}
// string Test::setProductionTest(string production) {}
// string Test::setMovieIDTest(string movieID) {}

// string Test::setGenresTest(vector<string>& genre) {}
// string Test::setDirectorsTest(vector<string>& directors) {}
// string Test::setWritersTest(vector<string>& writers) {}
// string Test::setActorsTest(vector<string>& actors) {}
// string Test::setDescriptionsTest(vector<string>& description) {}

// int Test::getYearTest() const {}
// int Test::getNumOfVotesTest() const {}
// int Test::getDurationTest() const {}

// double Test::getRatingTest() const {}

// string Test::getTitleTest() const {}
// string Test::getProductionTest() const {}
// string Test::getMovieIDTest() const {}

// vector<string> Test::getGenresTest() const {}
// vector<string> Test::getDirectorsTest() const {}
// vector<string> Test::getWritersTest() const {}
// vector<string> Test::getActorsTest() const {}
// vector<string> Test::getDescriptionsTest() const {}


// //Output
// string Test::outputMenuTest() {}
// string Test::questionOut1Test() {}
// string Test::questionOut2Test() {}
// string Test::questionOut3Test() {}
// string Test::questionOut4Test() {}
// string Test::questionOut5Test() {}
// string Test::searchChoiceOutTest() {}
// string Test::similarOutTest() {}
// string Test::filterOutGenreTest() {}
// string Test::filterOutYearTest() {}
// string Test::filterOutDurationTest() {}
// string Test::filterOutRatingTest() {}
// string Test::filterOutPopularityTest() {}


// //Sort
// vector<Movie> Test::sortCSVTest() {}


// //Quiz
string Tests::quizAlgoTest() {
    Sort *s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Quiz *q = new Quiz();
    q->quizAlgo(movieVector);

    delete s;
    delete q;
    return "Covered: quizAlgo()";
}

string Tests::getQuizTest() {
    Quiz *q = new Quiz();
    q->getQuiz();

    delete q;
    return "Covered: getQuiz()";
}

string Tests::q1PointsTest() {
    Sort *s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> choices = {"a", "b", "c", "d"};

    Quiz *q = new Quiz();
    q->q1Points(movieVector, choices.at(0));
    q->q1Points(movieVector, choices.at(1));
    q->q1Points(movieVector, choices.at(2));
    q->q1Points(movieVector, choices.at(3));

    delete s;
    delete q;
    return "Covered: q1Points()";
}

string Tests::q2PointsTest() {
    Sort *s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> choices = {"a", "b", "c", "d"};

    Quiz *q = new Quiz();
    q->q2Points(movieVector, choices.at(0));
    q->q2Points(movieVector, choices.at(1));
    q->q2Points(movieVector, choices.at(2));
    q->q2Points(movieVector, choices.at(3));

    delete s;
    delete q;
    return "Covered: q2Points()";
}

string Tests::q3PointsTest() {
    Sort *s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> choices = {"a", "b", "c", "d"};

    Quiz *q = new Quiz();
    q->q3Points(movieVector, choices.at(0));
    q->q3Points(movieVector, choices.at(1));
    q->q3Points(movieVector, choices.at(2));
    q->q3Points(movieVector, choices.at(3));

    delete s;
    delete q;
    return "Covered: q3Points()";
}

string Tests::q4PointsTest() {
    Sort *s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> choices = {"a", "b", "c", "d"};

    Quiz *q = new Quiz();
    q->q4Points(movieVector, choices.at(0));
    q->q4Points(movieVector, choices.at(1));
    q->q4Points(movieVector, choices.at(2));
    q->q4Points(movieVector, choices.at(3));

    delete s;
    delete q;
    return "Covered: q4Points()";
}

string Tests::q5PointsTest() {
    Sort *s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> choices = {"a", "b", "c", "d"};

    Quiz *q = new Quiz();
    q->q5Points(movieVector, choices.at(0));
    q->q5Points(movieVector, choices.at(1));
    q->q5Points(movieVector, choices.at(2));
    q->q5Points(movieVector, choices.at(3));

    delete s;
    delete q;
    return "Covered: q5Points()";
}


//Search
string Tests::getPointsTest() {
    Search* s = new Search();
    s->getPoints();

    delete s;
    return "Covered: getPoints()";
}

string Tests::similarAlgoTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    string similar = "Whiplash";

    Search* se = new Search();
    se->similarAlgo(movieVector, similar);

    delete s;
    delete se;
    return "Covered: similarAlgo()";
}

string Tests::filterAlgoTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector = {"Action", "a", "a", "a", "a"};

    Search* se = new Search();
    se->filterAlgo(movieVector, filterVector);

    delete s;
    delete se;
    return "Covered: filterAlgo()";
}

string Tests::searchSimilarPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    string similar = "Whiplash";

    Search* se = new Search();
    se->searchSimilarPoints(similar, movieVector);

    delete s;
    delete se;
    return "Covered: searchSimilarPoints()";
}

string Tests::genreFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector = {"Action", "a", "a", "a", "a"};

    Search* se = new Search();
    se->genreFilterPoints(movieVector, filterVector);

    delete s;
    delete se;
    return "Covered: genreFilterPoints()";
}

string Tests::yearFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "b", "a", "a", "a"};
    vector<string> filterVector3 = {"Action", "c", "a", "a", "a"};
    vector<string> filterVector4 = {"Action", "d", "a", "a", "a"};
    vector<string> filterVector5 = {"Action", "e", "a", "a", "a"};

    Search* se = new Search();
    se->yearFilterPoints(movieVector, filterVector1);
    se->yearFilterPoints(movieVector, filterVector2);
    se->yearFilterPoints(movieVector, filterVector3);
    se->yearFilterPoints(movieVector, filterVector4);
    se->yearFilterPoints(movieVector, filterVector5);

    delete s;
    delete se;
    return "Covered: yearFilterPoints()";
}

string Tests::durationFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "a", "b", "a", "a"};
    vector<string> filterVector3 = {"Action", "a", "c", "a", "a"};
    vector<string> filterVector4 = {"Action", "a", "d", "a", "a"};
    vector<string> filterVector5 = {"Action", "a", "e", "a", "a"};
    vector<string> filterVector6 = {"Action", "a", "f", "a", "a"};

    Search* se = new Search();
    se->durationFilterPoints(movieVector, filterVector1);
    se->durationFilterPoints(movieVector, filterVector2);
    se->durationFilterPoints(movieVector, filterVector3);
    se->durationFilterPoints(movieVector, filterVector4);
    se->durationFilterPoints(movieVector, filterVector5);
    se->durationFilterPoints(movieVector, filterVector6);

    delete s;
    delete se;
    return "Covered: durationFilterPoints()";
}

string Tests::ratingFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "a", "a", "b", "a"};
    vector<string> filterVector3 = {"Action", "a", "a", "c", "a"};
    vector<string> filterVector4 = {"Action", "a", "a", "d", "a"};
    vector<string> filterVector5 = {"Action", "a", "a", "e", "a"};
    vector<string> filterVector6 = {"Action", "a", "a", "f", "a"};
    vector<string> filterVector7 = {"Action", "a", "a", "g", "a"};

    Search* se = new Search();
    se->ratingFilterPoints(movieVector, filterVector1);
    se->ratingFilterPoints(movieVector, filterVector2);
    se->ratingFilterPoints(movieVector, filterVector3);
    se->ratingFilterPoints(movieVector, filterVector4);
    se->ratingFilterPoints(movieVector, filterVector5);
    se->ratingFilterPoints(movieVector, filterVector6);
    se->ratingFilterPoints(movieVector, filterVector7);

    delete s;
    delete se;
    return "Covered: ratingFilterPoints()";
}

string Tests::voteFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "a", "a", "a", "b"};
    vector<string> filterVector3 = {"Action", "a", "a", "a", "c"};
    vector<string> filterVector4 = {"Action", "a", "a", "a", "d"};
    vector<string> filterVector5 = {"Action", "a", "a", "a", "e"};

    Search* se = new Search();
    se->voteFilterPoints(movieVector, filterVector1);
    se->voteFilterPoints(movieVector, filterVector2);
    se->voteFilterPoints(movieVector, filterVector3);
    se->voteFilterPoints(movieVector, filterVector4);
    se->voteFilterPoints(movieVector, filterVector5);

    delete s;
    delete se;
    return "Covered: voteFilterPoints()";
}


//Random
// Movie Test::randomAlgoTest(vector <Movie>& sortedList) {}


// //Result
string Tests::quizResultTest() {
    // vector<string> genres = {"Horror", "Action"};
    // vector<string> directors = {"Steven Spielberg"};
    // vector<string> writers = {"Stephen King"};
    // vector<string> actors = {"Dwayne Johnson", "Morgan Freeman"};
    // vector<string> descriptions = {"A great movie."};
    // Movie *m1 = new Movie("111111", "Test Movie 1", 2023, genres, 120, directors, writers, "Lionsgate", actors, descriptions, 8.8, 957);
    // Movie *m2 = new Movie("222222", "Test Movie 2", 2026, genres, 150, directors, writers, "Warner Bros.", actors, descriptions, 9.2, 1001);
    // Movie *m3 = new Movie("333333", "Test Movie 3", 2030, genres, 180, directors, writers, "DreamWorks Animation", actors, descriptions, 10.0, 498);
    // vector<Movie> movieVector;
    // movieVector.push_back(*m1);
    // movieVector.push_back(*m2);
    // movieVector.push_back(*m3);

    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    
    Result *r = new Result();
    r->quizResult(movieVector);

    delete s;
    delete r;
    return "Covered: quizResult()";
}

string Tests::similarResultTest() {
    // vector<string> genres = {"Horror", "Action"};
    // vector<string> directors = {"Steven Spielberg"};
    // vector<string> writers = {"Stephen King"};
    // vector<string> actors = {"Dwayne Johnson", "Morgan Freeman"};
    // vector<string> descriptions = {"A great movie."};
    // Movie *m1 = new Movie("111111", "Test Movie 1", 2023, genres, 120, directors, writers, "Lionsgate", actors, descriptions, 8.8, 957);
    // Movie *m2 = new Movie("222222", "Test Movie 2", 2026, genres, 150, directors, writers, "Warner Bros.", actors, descriptions, 9.2, 1001);
    // Movie *m3 = new Movie("333333", "Test Movie 3", 2030, genres, 180, directors, writers, "DreamWorks Animation", actors, descriptions, 10.0, 498);
    // vector<Movie> movieVector;
    // movieVector.push_back(*m1);
    // movieVector.push_back(*m2);
    // movieVector.push_back(*m3);

    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    string similarTitle = "Whiplash";
    
    Result *r = new Result();
    r->similarResult(movieVector, similarTitle);

    delete s;
    delete r;
    return "Covered: similarResult()";
}

string Tests::filterResultTest() {
    // vector<string> genres = {"Horror", "Action"};
    // vector<string> directors = {"Steven Spielberg"};
    // vector<string> writers = {"Stephen King"};
    // vector<string> actors = {"Dwayne Johnson", "Morgan Freeman"};
    // vector<string> descriptions = {"A great movie."};
    // Movie *m1 = new Movie("111111", "Test Movie 1", 2023, genres, 120, directors, writers, "Lionsgate", actors, descriptions, 8.8, 957);
    // Movie *m2 = new Movie("222222", "Test Movie 2", 2026, genres, 150, directors, writers, "Warner Bros.", actors, descriptions, 9.2, 1001);
    // Movie *m3 = new Movie("333333", "Test Movie 3", 2030, genres, 180, directors, writers, "DreamWorks Animation", actors, descriptions, 10.0, 498);
    // vector<Movie> movieVector;
    // movieVector.push_back(*m1);
    // movieVector.push_back(*m2);
    // movieVector.push_back(*m3);

    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    vector<string> filters = {"Romance", "2020", "100", "7.0", "4000"};
    
    Result *r = new Result();
    r->filterResult(movieVector, filters);

    delete s;
    delete r;
    return "Covered: filterResult()";
}

string Tests::randomResultTest() {
    vector<string> genres = {"Horror", "Action"};
    vector<string> directors = {"Steven Spielberg"};
    vector<string> writers = {"Stephen King"};
    vector<string> actors = {"Dwayne Johnson", "Morgan Freeman"};
    vector<string> descriptions = {"A great movie."};
    Movie *m1 = new Movie("111111", "Test Movie 1", 2023, genres, 120, directors, writers, "Lionsgate", actors, descriptions, 8.8, 957);
    
    Result *r = new Result();
    r->randomResult(*m1);

    delete r;
    return "Covered: randomResult()";
}


//Input
string Tests::getMenuTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getMenu(movieVector);

    delete s;
    delete in;
    return "Covered: getMenu()";
}

string Tests::getSearchTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getSearch(movieVector);

    delete s;
    delete in;
    return "Covered: getSearch()";
}

string Tests::getSimilarTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getSimilar();

    delete s;
    delete in;
    return "Covered: getSimilar()";
}

string Tests::getFilterTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getFilter();

    delete s;
    delete in;
    return "Covered: getFilter()";
}