#include<iostream>
using namespace std;
#include "contapassi.h"

Contapassi:: Contapassi()
{
    valore= 0;
    passo=1;
}

Contapassi:: Contapassi(int x)
{
    valore=x;
    passo=1;
}

Contapassi:: Contapassi(int x, int y)
{
    valore=x;
    passo=y;
}

Contapassi:: ~Contapassi()
{
    cout<<"hai utilizzato il distruttore"<<endl;
}

int Contapassi:: getValore()   
{
    return valore;
}

void Contapassi:: setValore(int x)   
{
    valore=x;
}

int Contapassi:: getPasso()
{
    return passo;
}

void Contapassi:: setPasso(int x)
{
    passo=x;
}

void Contapassi:: reset()
{
    valore=0;
}

void Contapassi:: inc()
{
    valore=valore+passo;
}

void Contapassi:: dec()
{
    valore=valore-passo;
}

void Contapassi:: stampa()
{
    cout<<"valore: "<<valore<<endl<<"passo: "<<passo<<endl;
}