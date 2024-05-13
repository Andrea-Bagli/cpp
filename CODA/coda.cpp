#include <iostream>
#include "coda.h"

using namespace std;

coda:: coda()
{

}

bool coda:: isempty()
{
    if(n==0) return true;
    else return false;
}

bool coda:: isfull()
{
    if(n==N) return true;
    else return false;
}

void coda:: inserisci(int x)
{
    v[P]=x
}