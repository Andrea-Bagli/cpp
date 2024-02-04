#include "studente.h"
using namespace std;
#include <iostream>

studente:: ~studente()
{
    cout<<'hai usato il distruttore'<<endl;
}

int studente:: getMatricola()
{
    return matricola;
}

void studente:: setMatricola(int matricola)
{
    this->matricola=matricola
}

int studente:: getCognome()
{
    return Cognome;
}

void studente:: setCognome(std::string Cognome)
{
    this->Cognome=Cognome;
}

int studente:: votoMaggiore()
{
    int max=0;
    for(int i=0;i<N;i++)
    {
        if(V[i]>max) max=V[i];
    }
     return max;
}

double studente:: mediaVoti()
{
    int s=0;
    for(int i=0;i<Ni++)
    {
        s=s+V[i];
    }

    s=s/N;
    return s;
}