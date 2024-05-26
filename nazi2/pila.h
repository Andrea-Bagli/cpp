#ifndef PILA_H
#define PILA_H


class pila{

    private:
    int Fine;
    int size;
    int *vet;

    public:
    pila();

    bool push(int);
    bool pop();
    int top();
    bool isEmpty();
    bool isFull();
    void stampa();

    
};





#endif