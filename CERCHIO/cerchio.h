#ifndef CERCHIO_H
#define CERCHIO_H


class Cerchio
{
    private:
    int raggio;

    public:

    Cerchio();
    Cerchio(int);
    ~Cerchio();

    void setRaggio(int);
    int getRaggio();
    int calcolaArea();
    int calcolaDiametro();
    int calcolaCirconferenza();
    void stampa();

};
#endif