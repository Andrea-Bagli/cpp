#ifndef CODA_H
#define CODA_H
#define N 10

class coda{
    private:
    int v[N];
    int n=0;
    int *P=v  //puntatore a v (il nostro indice)


    public:
    coda(); //costruttore
    bool isempty();
    bool isfull();
    void inserisci();
    void cancella();
    void first();  //(visualizza il 1° elemento senza cancellarlo)
    void stampa(); 

}
#endif