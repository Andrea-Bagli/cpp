#include "es.h"
#include <iostream>
using namespace std;

int main()
{
    coda c1;

    c1.push(5);
    c1.push(4);
    c1.push(7);

    c1.stampa();

    int r= c1.top();
    cout<<r<<endl;

    c1.push(9);

    c1.pop();

    c1.stampa();

}