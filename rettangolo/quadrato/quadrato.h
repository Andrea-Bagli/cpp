#ifndef CONTATORE_H
#define CONTATORE_H
#include 'rettangolo.h'

class quadrato{

    protected:
    int lato;

    public:

    quadrato(int lato=5)
    {
        this->lato=lato;
    }

    int CalcolaArea();
    int CalcolaPerimetro();
    int CalcolaDiagonale();
}