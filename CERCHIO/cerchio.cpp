#include "cerchio.h"
#include <cmath>
using namespace std;
#include <iostream>
#define PIGRECO 3.14

Cerchio:: Cerchio()
{
    raggio=5;
}

Cerchio:: Cerchio(double x)
{
    raggio=x;
}

Cerchio:: ~Cerchio()
{
    cout<<"hai usato il distruttore"<<endl;
}

void Cerchio:: setRaggio(double x)
{
    raggio=x;
}

double Cerchio:: getRaggio()
{
    return raggio;
}

double Cerchio:: calcolaArea()
{
    return PIGRECO*(pow(raggio,2));
}

double Cerchio:: calcolaDiametro()
{
    return raggio+raggio;
}

double Cerchio:: calcolaCirconferenza()
{
    return calcolaDiametro()*PIGRECO;
}

void Cerchio:: stampa()
{
    cout<<"raggio: "<<raggio<<endl<<"area: "<<calcolaArea()<<endl<<"diametro: "<<calcolaDiametro()<<endl<<"circonferenza: "<<calcolaCirconferenza()<<endl;
}

