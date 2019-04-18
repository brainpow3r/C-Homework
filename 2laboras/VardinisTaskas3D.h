#ifndef _VTASKAS_H_ 
#define _VTASKAS_H_

class VardinisTaskas3D{
   private:
      char*  vardas_;
      char*  info_;
      double x_;
      double y_;
      double z_;

   public:
      VardinisTaskas3D(const char* vardas=NULL, const char* info=NULL, double x=0, double y=0, double z=0);
      void rodykTaska() const;
      void keiskVarda(const char* naujas);
      void keiskInfo(const char* kitas);
      void keiskVieta(const double x, const double y, const double z);
      double atstumasIkiKito(const VardinisTaskas3D& kitas) const;
      ~VardinisTaskas3D();
};
#endif
