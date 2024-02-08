#include "contapassi.h"

#ifndef CONTATOREDOPPIO_H
#define CONTATOREDOPPIO_H

class ContatoreDoppio: public Contapassi{

    public:
        ContatoreDoppio(int valore = 0, int passo = 1):Contapassi(valore, passo){};
        void inc();
        void dec();

};

#endif