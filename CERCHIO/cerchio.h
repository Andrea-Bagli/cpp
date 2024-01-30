#ifndef CERCHIO_H
#define CERCHIO_H


class Cerchio
{
    private:
    double raggio;

    public:

    Cerchio();
    Cerchio(double);
    ~Cerchio();

    void setRaggio(double);
    double getRaggio();
    double calcolaArea();
    double calcolaDiametro();
    double calcolaCirconferenza();
    void stampa();

};
#endif