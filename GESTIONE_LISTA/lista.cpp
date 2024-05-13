#include <iostream>
#include "lista.h"

using namespace std;

lista :: lista()
{
    L = new nodo;       //creo nuovo nodo
    L -> next= NULL;    //imposto il puntatore al prossimo nodo a NULL
}

void lista:: InsInTesta(int x)
{
    nodo* P = new nodo; //creo nuovo nodo

    P -> next = L;      //next punta L
    L = P;
    L->info = x;

    //for(int c=0,P=L ;P!=NULL;c++, P=P->next);
      
    
}

void lista:: cancellaTesta()
{
    if(!IsEmpty()){  //se non è vuoto esegue
        nodo* P = L; //mettiamo P in testa
        L= L->next;  //spostiamo L al next
        delete P; //cancella P(nodo in testa)
    }
    
}

bool lista:: IsEmpty()
{
    if(L==NULL) return true;
    else return false;

}


void lista:: void CancellaCoda();
{
    if(!IsEmpty()){ //se non è vuoto esegue
        nodo* P = L;
        if(P->next==NULL){
            L= L->next;
            delete P;
        }
        else{
            nodo* P2 =L;
            for(P=P->next; P->next!=NULL; P2 = P2->next, P = P->next);
            P2->next=NULL;
            delete P;
        }
    }
}