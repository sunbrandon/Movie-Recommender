#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "../header/Input.h"

using namespace std;

int main() {
    Input *o = new Input();
    o->getSearch();
    delete o;

    return 0;
}