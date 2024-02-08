#include <iostream>
#include "ContatoreDoppio.h"

void ContatoreDoppio::inc() {
    Contapassi::inc();
    Contapassi::inc();
}

void ContatoreDoppio::dec() {
    Contapassi::dec();
    Contapassi::dec();
}