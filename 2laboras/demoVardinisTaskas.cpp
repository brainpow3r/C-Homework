#include <iostream>
#include <cstring>

#include "VardinisTaskas3D.h"


int main(){
    VardinisTaskas3D a("A", "Arti centro ...", 0,4,0);
    VardinisTaskas3D b("B", "Toli nuo centro ...", 100,0,0); 
    VardinisTaskas3D c;
    a.rodykTaska();
    b.rodykTaska();
    c.rodykTaska();
    
    std::cout << "Atstumas: " << a.atstumasIkiKito(b) << std::endl;
    return 0;
}
