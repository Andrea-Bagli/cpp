#ifndef TRIANGOLO_H
#define TRIANGOLO_H

class Triangolo
{
    private:
    int c1;
    int c2;

    public:

    Triangolo();
    Triangolo(int);
    Triangolo(int,int);
    ~Triangolo(); //distruttore

    int setC1(int);
    void getC1();
    int setC2(int);
    void getC2();
    int calcolaArea();
    int calcolaPerimetro();
    int calcolaIpo();
    void stampa();

};


#endif