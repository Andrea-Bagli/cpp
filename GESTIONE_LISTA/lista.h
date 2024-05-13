#ifndef LISTA_H
#define LISTA_H

struct s_nodo{
   int info;                //informazione di base
   struct s_nodo* next;     //puntatore al nodo successivo
}typedef nodo;

class lista{
    private:
    nodo* L; //puntatore al primo nodo (testa)


    public:

        Lista();                 //pone a NULL il puntatore alla Lista (costruttore)
        void InsInTesta(int);    //inserimento in testa (diventa primo elemento della lista)
        void cancellaTesta();    //coincide con pop di coda   
        void InsInCoda(int);     //inserimento in coda (diventa ultimo elemento della lista)
        void CancellaCoda();     //cancella ultimo elemento della lista
        void StampaLista();      //scorre tutta la lista stampando su monitor il campo info
        bool IsEmpty();          // restituisce true se è vuota (nessun nodo), false altrimenti
        void InserisciPosizione(int, int);
        void CancellaPosizione(int);

}



#endif