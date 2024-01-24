#include<iostream>
#include<cmath>
using namespace std;
#define CONTATORE_H

    contatore()
    {
        valore=1;
        passo=1;
    }
    contatore(int valore, int passo)
    {
        this->valore=valore;
        this->passo=passo;
    }
    void setvalore(int valore)
    {
        this->valore=valore;
    }
     void setpasso(int passo)
    {
        this->passo=passo;
    }
    
    int getvalore()
    {
         return valore;
    }
    int getpasso()
    {
        return passo;
    }
    void reset()
    {
        valore=0;
    }  
    void inc()
    {
        valore=valore+1;
    }       
    void dec()
    {
        valore=valore-1;
    }

    void stampaTutto()
    {
        cout<<"valore "<<valore<<endl;
    }
};


