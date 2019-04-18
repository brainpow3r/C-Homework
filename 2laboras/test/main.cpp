//#include "VardineAtkarpa3D.h"
#include "klases/VardineSfera3D.h"
#include "VardinisTrikampis3D.h"
#include "klases/VardinisKubas3D.h"
#include <iostream>
#define NEWLINE std::cout << std::endl

int main() {
    VardinisTaskas3D *taskas1 = new VardinisTaskas3D("A", "Taskas1", 0, 12, 0);
    VardinisTaskas3D *taskas2 = new VardinisTaskas3D("B", "Taskas2", 6, 12, 3);
    VardinisTaskas3D *taskas3 = new VardinisTaskas3D("C", "Taskas3", 66, 17, -9);
    std::cout << "Tasko informacija: " << std::endl;
    taskas1->rodykTaska();
    NEWLINE;

    //VardineAtkarpa3D *atkarpa1 = new VardineAtkarpa3D("Atkarpa1", "Pirmoji atkarpa", 1, 1, 1, 3, 6, 9);
    //std::cout << "Atkarpos informacija: " << std::endl;
    //atkarpa1->printEverything();
    //NEWLINE;

    //VardineAtkarpa3D *atkarpa2 = new VardineAtkarpa3D("Atkarpa2", "Antroji atkarpa", taskas1, taskas2);
    //NEWLINE;

    //std::cout << "Antrosios atkarpos pradzia: " << std::endl;
    //atkarpa2->getStartpoint()->rodykTaska();
    //atkarpa2->setStartpoint(*taskas3);
    //std::cout << "Nauja antrosios atkarpos pradzia: " << std:: endl;
    //atkarpa2->getStartpoint()->rodykTaska();
    //atkarpa2->vidurioTaskas();

    //NEWLINE;
    //std::cout << "Atstumas tarp " << atkarpa1->getName() << " ir " << atkarpa2->getName() << ": "
    //<< atkarpa1->atstumasIkiKitosAtkarpos(*atkarpa2) << std::endl;
    //NEWLINE;

    //VardineSfera3D *sfera1 = new VardineSfera3D("O", "Sfera1", 3.4, taskas1);
    //sfera1->printEverything();
    //std::cout << "Sferos pavirsiaus plotas ir turis: " << std::endl;
    //std::cout << sfera1->sphereSurfaceArea() << " , " << sfera1->sphereVolume() << std::endl;

    //sfera1->setCenterPoint(*taskas2);
    //sfera1->setRadius(8);
    //std::cout << "Sfera su pakeistais duomenimis: " << std::endl;
    //sfera1->printEverything();

    VardinisTrikampis3D *trikampis1 = new VardinisTrikampis3D("ABC", "Trikampis 1", *taskas1, *taskas2, *taskas3);
    trikampis1->printEverything();
    std::cout << std::endl;
    trikampis1->vertexLengths();
    std::cout << std::endl;
    std::cout << "Trikampio perimetras ir plotas: " << std::endl;
    std::cout << "P = " << trikampis1->calculatePerimeter() << " S = " << trikampis1->calculateArea() << std::endl;
    NEWLINE;

    VardinisKubas3D *kubas1 = new VardinisKubas3D("W", "Pirmas Kubas", taskas3, 11.1);
    kubas1->printEverything();

}
