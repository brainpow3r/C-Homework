#include "Taskas3D.h"
#include <cmath>

Taskas3D::Taskas3D(double x, double y, double z):x_(x), y_(y), z_(z){}
Taskas3D::Taskas3D(const Taskas3D& kitas){
    x_ = kitas.x_;
    y_ = kitas.y_;
    z_ = kitas.z_;
} 
double Taskas3D::atstumasIkiCentro() { return sqrt(x_ * x_ + y_ * y_ + z_ * z_); }
double Taskas3D::koksX(){ return x_; }
double Taskas3D::koksY(){ return y_; }
double Taskas3D::koksZ(){ return z_; }
void Taskas3D::tegulX(double nx) { x_ = nx; }
void Taskas3D::tegulY(double ny) { y_ = ny; }
void Taskas3D::tegulZ(double nz) { z_ = nz; }


