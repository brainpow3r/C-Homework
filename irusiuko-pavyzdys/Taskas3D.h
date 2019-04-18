#ifndef _TASKAS3D_H_ 
#define _TASKAS3D_H_ 

class Taskas3D {
    private:
       double x_;
       double y_;
       double z_;
    public:
       Taskas3D(double x = 0, double y = 0, double z = 0);
       Taskas3D(const Taskas3D& kitas);
       double atstumasIkiCentro();
       double koksX();
       double koksY();
       double koksZ();
       void tegulX(double nx);
       void tegulY(double ny);
       void tegulZ(double nz);

};



#endif

