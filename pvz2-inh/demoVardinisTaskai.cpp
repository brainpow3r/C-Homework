#include <iostream>
#include <cstring>

#include "VardinisTaskas3DIst.h"



int main(){
    VardinisTaskas3D a("A", "Arti centro ...", 0,4,0);
    VardinisTaskas3DIst b("B", "Toli nuo centro ...", 100,0,0); 
    a.rodykTaska();

    b.keiskVieta(20,20,20);
    b.rodykTaska();
    
    VardinisTaskas3D* p;
    p = &a;
    p->rodykTaska();
    
    p = &b;
    p->rodykTaska();

   
    return 0;
}
