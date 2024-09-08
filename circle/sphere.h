// Interface file for the sphere class
#ifndef SPHERE_H
#define SPHERE_H
#include "circle.h"

class Sphere : public Circle {
    public:
           Sphere(double r);
           ~Sphere();
           double getSurface() const;
           double getVolume() const;
};
#endif