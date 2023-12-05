#include "../header/Random.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

Random::Random() {}

Random::~Random() {}

Movie Random::randomAlgo(vector <Movie>& sortedList) {
    srand(time(0));
    int movieChoice = rand() % 100;
    return sortedList.at(movieChoice);
}