#ifndef CYLINDER_H
#define CYLINDER_H
#include "constants.h"

class Cylinder{
//Member variables- that we use to model our base radius and height properties of cylinder
    private:
            double radius {};
            double height {};  


//Member functions or behaviors. 
   
    public:
    
    // Constructors
    //Cylinder() = default;                            //    default constructor
    Cylinder(){
        radius = 2.0;
        height = 4.0;
    }
    Cylinder(double radius_param, double height_param);


//Getters  ----***returns by value ie returns a copy.
    double get_radius();
    double get_height();

//Setters
    void set_radius(double radius_param);
    void set_height(double height_param);

//methods /functions
     double volume();
    
    
  
};

#endif