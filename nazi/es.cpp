#include "es.h"
#include <iostream>

using namespace std;

bool coda:: isEmpty()
{
    if(Fine!=0) return false;
    return true;
}

bool coda:: isFull()
{
    if(Fine==size) return true;
    return false;
}

bool coda:: push(int x)
{
    if(!isFull()){
        vet[Fine]=x;                            
        Fine++;
        return true;
    }
    return false;
}

bool coda:: pop()
{
    if(!isEmpty()){
        Inizio++;
        return true;
    }
    return false;
}

int coda:: top()
{
    if(!isEmpty())
    {
        return vet[Inizio];
    }
    return 0;
}

void coda:: stampa(){
    if(!isEmpty()){
        for(int i=Inizio; i!=Fine; i++)
        {
            cout<<vet[i]<<endl;
        }
        
    }

    else cout<<"coda vuota"<<endl;
}


