#include <iostream>
#include <cstring>
#include <cmath>
#include "VardinisTaskas3D.h"


 VardinisTaskas3D::VardinisTaskas3D(const char* vardas, const char* info, double x, double y, double z):
             x_(x),y_(y),z_(z){
       #ifdef DEBUG
         std::cout << "Konstruktorius veikia ..." << std::endl;
       #endif
     
       if( vardas != NULL ){    
             int l1 = strlen(vardas);
             this->vardas_ = new char[l1+1];
             strcpy(this->vardas_, vardas);
         } else
             this->vardas_ = NULL;
       if( info != NULL ){    
             int l2 = strlen(info);
             this->info_ = new char[l2+1];
             strcpy(this->info_, info);
         } else
             this->info_ = NULL;
   }

  void  VardinisTaskas3D::rodykTaska() const{
        if( this->vardas_ != NULL ){    
             std::cout << "Vardas: " << this->vardas_ << std::endl;   
        }else 
             std::cout << "Vardas: <NEPRSKIRTAS> " <<  std::endl;
       
        if( this->info_ != NULL ){    
             std::cout << "Info: " << this->info_ << std::endl;   
        }else 
             std::cout << "Info: <NĖRA DUOMENŲ> " <<  std::endl;
        std::cout << "Koordinatės: (" << this->x_ << ", " << this->y_ << ", " << this->z_ << ")" << std::endl;

  }
  
  void VardinisTaskas3D::keiskVarda(const char* naujas){
       if( this->vardas_ != NULL ) delete[] this->vardas_;     
       int l = strlen(naujas);
       this->vardas_ = new char[l+1];
       strcpy(this->vardas_, naujas);
   }

  
  void VardinisTaskas3D::keiskInfo(const char* kitas){
       if( this->info_ != NULL ) delete[] this->info_;     
       int l = strlen(kitas);
       this->info_ = new char[l+1];
       strcpy(this->info_, kitas);
  } 
  
  void VardinisTaskas3D::keiskVieta(const double x, const double y, const double z){
        x_ = x; y_ = y; z_ = z;  
  } 

  double VardinisTaskas3D::atstumasIkiKito(const VardinisTaskas3D& kitas) const{
      double dx = this->x_ - kitas.x_;
      double dy = this->y_ - kitas.y_;
      double dz = this->z_ - kitas.z_;
      return sqrt(dx*dx+dy*dy+dz*dz);
  }

  VardinisTaskas3D::~VardinisTaskas3D(){
     #ifdef DEBUG
     std::cout << "Destruktorius veikia ..." << std::endl;
     #endif
     if( this->vardas_ != NULL ) delete[] this->vardas_;     
     if( this->info_ != NULL ) delete[] this->info_;     
  }
