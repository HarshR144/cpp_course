#include <iostream>
#include <string>

#include "constants.h"   //including constants.h header file
#include "cylinder.h"

using namespace std;





int main() {
    // Cylinder cylinder1;
     Cylinder cylinder1(10 , 20);
    cout << "volume: " << cylinder1.volume() << endl;

// change values of member varaibles
    // cylinder1.height =1.0;
    // cylinder1.radius =1.0;
    // cout << "volume: " << cylinder1.volume() << endl;

    cout<< "radius cylinder1 : " << cylinder1.get_radius() <<endl;
    cout<< "height cylinder1 : " << cylinder1.get_height() <<endl;
    
    cylinder1.set_height(5);
    cylinder1.set_radius(2.5);
    cout<< "radius cylinder1 : " << cylinder1.get_radius() <<endl;
    cout<< "height cylinder1 : " << cylinder1.get_height() <<endl;
    
return 0;
}