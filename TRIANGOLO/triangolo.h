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

    void setC1(int);
    int getC1();
    void setC2(int);
    int getC2();
    int calcolaArea();
    int calcolaPerimetro();
    int calcolaIpo();
    void stampa();

};


#endif