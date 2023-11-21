#include <iostream>
#include <cstdlib>
#include "../header/Output.h"

using namespace std;

int main() {
    Output *o = new Output();
    o->filterOutGenre();
    o->filterOutYear();
    o->filterOutDuration();
    o->filterOutRating();
    o->filterOutPopularity();
    delete o;
}