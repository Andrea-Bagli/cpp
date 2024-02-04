#include "studente.h"
#include <iostream>
using namespace std;

int main()
{
    int r,z;

    studente S1();
    studente S2(10,"Rossi");

    S1.setMatricola(3);
    S1.setCognome("mariani");

    r=S1.votoMaggiore();
    Z=s2.votoMaggiore();

    if(r>z) cout<<S1.getCognome()<<endl;
    if(r<z) cout<<S2.getCognome()<<endl;

    r=S1.mediaVoti();
    z=S2.mediaVoti();

    if(r>z) cout<<S1.getCognome()<<endl;
    if(r<z) cout<<S2.getCognome()<<endl;

}