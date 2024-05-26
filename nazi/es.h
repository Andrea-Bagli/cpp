#ifndef ES_H
#define ES_H


class coda{

    private:
    int Fine;
    int Inizio;
    int size;
    int *vet;

    public:
    coda(int size=10){
        this->size=size;
        vet= new int[size];
        Fine=0;
        Inizio=0;
    }

    bool push(int);
    bool pop();
    int top();
    bool isEmpty();
    bool isFull();
    void stampa();

    
};





#endif