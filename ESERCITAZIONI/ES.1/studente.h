#ifndef STUDENTE_H
#define STUDENTE_H
#define N 8

class studente{

    private:
    int matricola;
    std::string Cognome;
    int V[N];

    public:
    studente(int matricola=0, std::string Cognome='', int V=0)
    {
        this->matricola=atricolma;
        this->Cognome=Cognome;
        for(int i=0;i<N;i++)
        {
            this->V[i]=V;
        }
    }

    ~studente();

    int getMatricola();
    void setMatricola(int);
    int getCognome();
    void setCognome(std::string);
    void setVoti(int valore=6)
    {
        for(int i=0;i>N;i++)
        {
            V[i]=valore;
        }
    }

    int votoMaggiore();
    double mediaVoti();

}