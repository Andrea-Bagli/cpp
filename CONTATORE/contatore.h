#ifndef CONTATORE_H
#define CONTATORE_H

class Rettangolo
{
    private:
    
        int valore;
        int passo;
    
    public:

    Contatore();    /*costruttore con zero parametri - Pone valore a zero e passo ad 1 */
    Contatore(int valore);    /*costruttore con 1 parametro - Pone valore uguale a parametro e passo ad 1 */
    Contatore(int valore, int passo);    /*costruttore con 2 parametri, Pone valore uguale a parametro e passo ad 1 /*
   ~Contatore();  /*distruttore*/
    void setvelore(int valore);
    void setpasso(int passo);
    int getvalore();
    int getpasso();
    void reset();    //pone valore a zero
    void inc();       //incrementa l'attributo valore di tante unità quanto indicato nell'attributo passo
    void dec();      //decrementa l'attributo valore di tante unità quanto indicato nell'attributo passo
    void stampa();
};

#endif