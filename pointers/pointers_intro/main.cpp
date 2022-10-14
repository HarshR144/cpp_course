#include <iostream>
#include <string>
using namespace std;


int main() {
// pointer is a special kind of variable that stores the address of other variables.
// int* p_var   here U PUT A * AFTER THE TYPE THIS tells us that it is a pointer with * after int type .
// int means it can store address of only int type variable.

//DECLARING A POINTER
/*
int * p_number {};  //stores address of only int and {} is used to initialize pointerand denote 
//that pointer is currently not pointing to anything.
double * p_fractn_number {};   //stores address of int only

*/

//int * p_numb1 {nullptr}; //nullptr can also be used.

//...............................................

//POINTER SIZE
//all pinter have same size

//...............................................

//dont do this int *p_nmb {}, var {}
// instead do tis 
// int *p_nmb {};
// int var {};

//...............................................

//ASSIGNINING DATA TO ADDRESS VARIABLES

int no1 {45};
int* p_numb1 {&no1};  // & means address of 
cout<<"value of no1 "<<no1<<endl;
cout<<"address pf no1 stored in p_numb1"<<p_numb1<<endl;
  //you can changea and store address of different var in the pointer var
int no2 {4};
no2 = 8 ;
p_numb1 = &no2;
cout<<no2<<endl;
cout<<p_numb1<<endl;

// cant cross adress of differnt type if pointer is made for other type var
//ex:
/*
double var1 {15};
int* p_var1 {&var1};   // a compile error occurs
*/


//...............................................

//DEREFRECING A POINTER
//          it is act of reading something through a pointer like if we have an adress
//stored in a pointer we can access or read the value stored in that address using the pointer.

// ex;

int* p_var4 {};
int var4 {17};
p_var4 = &var4;
cout<<"var4 value is "<< *p_var4 <<endl;

}