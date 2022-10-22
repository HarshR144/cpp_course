#include <iostream>
#include <string>
using namespace std;
const double PI {3.1415926535897932384626433832795};

class Cylinder{
//Member variables- that we use to model our base radius and height properties of cylinder
    
//Member functions or behaviors. 
    public:
    // Constructors
    //Cylinder() = default;                            //    default constructor
    Cylinder(){
        radius = 2.0;
        height = 4.0;
    }
    Cylinder(double radius_param, double height_param){
        radius = radius_param;
        height = height_param;
    }


//Getters  ----***returns by value ie returns a copy.
    double get_radius(){
        return radius;
    }

    double get_height(){
        return height;
    }

//Setters
    void set_radius(double radius_param){
        radius = radius_param;
    }
    
    void set_height(double height_param){
        height = height_param;
    }

     double volume(){
        return PI * radius * radius * height;
    }
    private:
            double radius {};
            double height {};
};



int main() {
    Cylinder cylinder1;

    cout << "volume: " << cylinder1.volume() << endl;

// change values of member varaibles
    // cylinder1.height =1.0;
    // cylinder1.radius =1.0;
    // cout << "volume: " << cylinder1.volume() << endl;
return 0;
}