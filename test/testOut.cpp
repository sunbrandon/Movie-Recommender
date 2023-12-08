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

using namespace std;

int main() {
    Sort* s = new Sort();

    vector<Movie> movieVector;

    movieVector = s->sortCSV();

    Input* in = new Input();

    in->getMenu(movieVector);

    delete s;
    delete in;

    return 0;
}
