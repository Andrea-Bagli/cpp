#include "cerchio.h"
#include <cmath>
using namespace std;
#include <iostream>
#define PIGRECO 3.14

Cerchio:: Cerchio()
{
    raggio=5;
}

Cerchio:: Cerchio(int x)
{
    raggio=x;
}

Cerchio:: ~Cerchio()
{
    cout<<"hai usato il distruttore"<<endl;
}

void Cerchio:: setRaggio(int x)
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

double Cerchio:: stampa()
{
    cout<<"raggio"<<raggio<<"area:"<<calcolaArea()<<endl<<"diametro:"<<calcolaDiametro()<<endl<<"circonferenza:"<<calcolaCirconferenza();
}

