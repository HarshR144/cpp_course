#include <iostream>
#include <string>

#include "constants.h"   //including constants.h header file
#include "cylinder.h"

using namespace std;





int main() {
    // Cylinder cylinder1;
    // stack Object . notation
     Cylinder cylinder1(10 , 20);
    cout << "volume: " << cylinder1.volume() << endl;
//  managing object in stack  using pointers

Cylinder* p_cylinder1 = &cylinder1;
cout << "volume: " << (*p_cylinder1).volume() << endl;
cout << "volume: " << p_cylinder1->volume() << endl;
    // Heap Object .derefrencing and .notation
    //             -> notation
    Cylinder* p_cylinder2 = new Cylinder(2,4);   //create object on heap
    
    cout << "volume: " << (*p_cylinder2).volume() << endl;
    cout << "volume: " << p_cylinder2->volume() << endl;
  
    //->pointer access notation is going to allow us access stuff directly
    //  using pointer to an object that is dynamically allocated on the heap,
    delete p_cylinder2;
    p_cylinder2={nullptr};

 
    
return 0;
}