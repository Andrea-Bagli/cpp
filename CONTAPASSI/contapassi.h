#ifndef CONTAPASSI_H
#define CONTAPASSI_H

class Contapassi
{
    private:
    int valore;
    int passo;

    public:
    Contapassi();    /*costruttore con zero parametri - Pone valore a zero e passo ad 1 */
    Contapassi(int);    /*costruttore con 1 parametro - Pone valore uguale a parametro e passo ad 1 */
    Contapassi(int, int);    /*costruttore con 2 parametri, Pone valore uguale a parametro e passo ad 1 */
    ~Contapassi();  /*distruttore*/

    int getValore();
    void setValore(int);
    int getPasso();
    void setPasso(int);
    void reset();    //pone valore a zero
    void inc();       //incrementa l'attributo valore di tante unità quanto indicato nell'attributo passo
    void dec();      //decrementa l'attributo valore di tante unità quanto indicato nell'attributo passo
    void stampa();  //stampa il valore dei due attributi privati

    

};

#endif