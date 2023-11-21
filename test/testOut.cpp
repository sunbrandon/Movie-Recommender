#include <iostream>
#include <cstdlib>
#include "../header/Output.h"

using namespace std;

int main() {

    Output* o = new Output();
    o->outputMenu();
    delete o;

    return 0;
}