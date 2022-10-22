#include "cylinder.h"

Cylinder::Cylinder(double radius_param, double height_param){
        radius = radius_param;
        height = height_param;
    }
//Getters  ----***returns by value ie returns a copy.
    double Cylinder:: get_radius(){
        return radius;
    }

    double Cylinder::get_height(){
        return height;
    }

//Setters
    void Cylinder::set_radius(double radius_param){
        radius = radius_param;
    }
    
    void Cylinder::set_height(double height_param){
        height = height_param;
    }
//methods /functions
     double Cylinder::volume(){
        return PI * radius * radius * height;
    }
 


