#include "cerchio.h"
#include <cmath>
using namespace std;
#include <iostream>
#define PIGRECO 3,14

hypot()

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

Cerchio:: setRaggio(int x)
{
    raggio=x;
}

Cerchio:: getRaggio()
{
    return raggio;
}

Cerchio:: calcolaArea()
{
    return PIGRECO*(pow(raggio,2));
}

Cerchio:: calcolaDiametro()
{
    return raggio+raggio;
}

Cerchio:: calcolaCirconferenza()
{
    return calcolaDiametro()*PIGRECO;
}

Cerchio:: stampa()
{
    cout<<"raggio"<<raggio<<"area:"<<calcolaArea()<<endl<<"diametro:"<<calcolaDiametro()<<endl<<"circonferenza:"<<calcolaCirconferenza();
}

