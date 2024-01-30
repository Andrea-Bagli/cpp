#include "contapassi.h"
#include <iostream>
using namespace std;

int main()
{
    Contapassi cp1;
    Contapassi cp2(0);
    Contapassi cp3(0,1);

    cp1.setValore(0);
    cp1.setPasso(1);
    cp1.inc();
    cp1.stampa();

    cp2.setPasso(1);
    cp2.dec();
    cp2.stampa();

    cp3.inc();
    cp3.dec();
    cp3.stampa();

 
}