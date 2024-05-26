#include "pila.h"
#include <iostream>

using namespace std;

pila:: pila(){
    vet= new int[10];
    size=10;
    Fine=0;
}

bool pila:: isEmpty(){
    if(Fine!=0) return false
    return true;
}

bool pila:: isFull(){
    if(Fine== size) return true;
    return false;
}

bool pila:: push(int x){
    if(!isFull()) {
        vet[Fine]=x;
        fine++;
        return true;
        }
        return false;

}

bool pila:: pop(){
    if(!isEmpty()){
        Fine--:
        return true;
    }
    return false;
}

int pila:: top()
{
    if(!isEmpty())
    {
        return vet[fine-1];
    }
    return 0;
}

void pila:: stampa(){
    if(!isEmpty()){
        for(int i=0; i<Fine; i++){
            cout<<vet[i]<<endl;
        }
    }
}