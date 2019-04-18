#ifndef _ASMUO_H_ 
#define _ASMUO_H_
#define ILG 128
class CAsmuo{
   private:
      char  vardas[ILG];
      char  pavarde[ILG];
      char  akodas[12];
      double platuma;
      double ilguma;
   public:
      CAsmuo(const char* vardas, const char* pavarde, const char* akodas);
      void rodykViska() const;
      void keiskPavarde(const char* nauja);
      void keiskVarda(const char* naujas);
      void keiskVieta(const double ilguma, const double platuma);
};
#endif
