#include "triangolo.h"
#include <iostream>
using namespace std;

int main()
{
    Triangolo c1;
    Triangolo c2(3);
    Triangolo c3(4,6);

    c1.stampa();
    c2.stampa();
    c3.stampa();
}