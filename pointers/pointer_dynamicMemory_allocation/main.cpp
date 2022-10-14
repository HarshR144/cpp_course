#include <iostream>
#include <string>
using namespace std;


int main() {

//allocating dynamic memory using new
//initialze a pointer with dynamic memory dynamically allocate
//allocated in heap

int* p_var {};   //declare and initialize a pointer
p_var = new int;  //dynamically allocate space for int in heap
*p_var =78;//  writing into dynamically allocated memory
//.........................
//  OR
//it is also possible to initialze pointer with dynamic memory when we declare them
int* p_no5 {new int};   // memory location contains junk value
//Or
int* p_no6 {new int (5)};  // direct allocation 
int* p_no7 {new int {18}}; // uniform allocation
cout<<endl;


//remember to  release memory
delete p_var;
p_var ={nullptr};

delete p_no5;
p_no5 = {nullptr};

delete p_no6;
p_no6 = {nullptr};


delete p_no7;
p_no7 = {nullptr};
//returning memory ot system ie releasing or resseting
int* p_var2 {};
p_var2 = new int ;
*p_var2 =5;

// ...

delete p_var2;
p_var2 ={nullptr};

//we can reuse pointers after the releasing
p_var2 = new int (88);
cout<<*p_var2<<endl;

delete p_var2;
p_var2 ={nullptr};




cout<<"program is ending well"<<endl;

}