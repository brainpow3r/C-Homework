#include <iostream>
#include <cstdlib>
#include <cstring>
#include "CAsmuo.h"

CAsmuo::CAsmuo(const char* vardas, const char* pavarde, const char* akodas):ilguma(0),platuma(0){
    strcpy(this->vardas, vardas);           
    strcpy(this->pavarde, pavarde);
    strcpy(this->akodas, akodas);
}

void CAsmuo::rodykViska() const{

    std::cout << "Pavarde: " << this->pavarde << std::endl; 
    std::cout << "Vardas: " << this->vardas << std::endl;
    std::cout << "Asmens kodas: " << this->akodas << std::endl;
    std::cout << "Vieta: " << this->platuma << " platuma; " << this->ilguma << " ilguma "  << std::endl;
    
}

void CAsmuo::keiskPavarde(const char* nauja){

     strcpy(this->pavarde, nauja);
   
}

void CAsmuo::keiskVarda(const char* naujas){

     strcpy(this->vardas, naujas);
}
     
void CAsmuo::keiskVieta(const double platuma, const double ilguma){


     this->ilguma = ilguma;
     this->platuma = platuma;

}

