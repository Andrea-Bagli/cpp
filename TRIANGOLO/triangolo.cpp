#include "triangolo.h"
#include <cmath>
#include <iostream>
using namespace std;

Triangolo:: Triangolo()
{
    c1=5;
    c2=7;
}

Triangolo:: Triangolo(int x)
{
    c1=x;
    c2=7;
}

Triangolo:: Triangolo(int x, int y)
{
    c1=x;
    c2=y;
}

Triangolo:: ~Triangolo()
{
    cout<<"hai utilizzato il distruttore"<<endl;
}

void Triangolo:: setC1(int x)
{
    c1=x;
}

int Triangolo:: getC1()
{
    return c1;
}

void Triangolo:: setC2(int x)
{
    c2=x;
}

int Triangolo:: getC2()
{
    return c2;
}

int Triangolo:: calcolaArea()
{
    return (c1*c2)/2;
}

int Triangolo:: calcolaIpo()
{
    return sqrt(pow(c1,2)+pow(c2,2));
}

int Triangolo:: calcolaPerimetro()
{
    return c1+c2+calcolaIpo();
}

void Triangolo:: stampa()
{
    cout<<"cateto 1: "<<c1<<endl<<"cateto 2: "<<c2<<endl<<"area: "<<calcolaArea()<<endl<<"ipotenusa: "<<calcolaIpo()<<endl<<"perimetro: "<<calcolaPerimetro()<<endl;
}