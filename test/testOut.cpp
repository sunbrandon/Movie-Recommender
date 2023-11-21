#include <iostream>
#include <cstdlib>
#include "../header/Output.h"

using namespace std;

int main() {

    Output *o = new Output();
    o->questionOut1();
    o->questionOut2();
    o->questionOut3();
    o->questionOut4();
    o->questionOut5();
    delete o;

    return 0;
}