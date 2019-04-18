#include <iostream>
#include <cstring>
#include <cmath>
#include "VardinisTaskas3DIst.h"


 VardinisTaskas3DIst::VardinisTaskas3DIst(const char* vardas, const char* info, double x, double y, double z):
             VardinisTaskas3D(vardas, info, x,y,z), px_(x), py_(y), pz_(z){
     #ifdef DEBUG
          std::cout << "Konstruktorius VardinisTaskas3DIst veikia ..." << std::endl;
     #endif
    
 }

  void  VardinisTaskas3DIst::rodykTaska() const{
       VardinisTaskas3D::rodykTaska(); 
       std::cout << "Praeities koordinatės: (" << this->px_ << ", " << this->py_ << ", " << this->pz_ << ")" << std::endl;

  }
  
  void VardinisTaskas3DIst::keiskVieta(const double x, const double y, const double z){
       px_  = this->x_; py_  = this->y_; pz_  = this->z_; 
       x_ = x; y_ = y; z_ = z; // Galima buvo VardinisTaskas3D::keiskVieta(x,y,z); 
  } 

 
  VardinisTaskas3DIst::~VardinisTaskas3DIst(){
     #ifdef DEBUG
     std::cout << "Destruktorius VardinisTaskas3DIst veikia ..." << std::endl;
     #endif
  }
