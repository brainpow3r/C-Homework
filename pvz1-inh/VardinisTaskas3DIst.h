#ifndef _VTASKASIST_H_ 
#define _VTASKASIST_H_
#include "VardinisTaskas3D.h"

class VardinisTaskas3DIst: public VardinisTaskas3D{
   private:
      double px_;
      double py_;
      double pz_;
      

   public:
      VardinisTaskas3DIst(const char* vardas=NULL, const char* info=NULL, double x=0, double y=0, double z=0);
      void rodykTaska() const;
      void keiskVieta(const double x, const double y, const double z);
      ~VardinisTaskas3DIst();
};
#endif
