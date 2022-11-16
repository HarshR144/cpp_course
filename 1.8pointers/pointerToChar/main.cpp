#include <iostream>
#include <string>
using namespace std;
int main() {
//m1 to creating poiter to char
char* p_var1 {nullptr};
char var1 {'A'};
p_var1 = &var1;
cout<< *p_var1<<endl<<p_var1<<endl<<var1<<endl;

//initialize with string literal
/*
char* p_message {"Hello World"};  //think of this like this hello workd is going to be converted
//into a char array and this p_message is going to point to the first char of the array

//this id going togive us flexibility of treating our string as char pointers,

//now this is going to give error bcoz the cmpiler is coing to store ctring as
// const char array and the pointer is not const char pointer that means it can be used
//  to change and modify string which willor might be disasterous.

//like ex: u try to do
//*p_message ='h';  //this will change hello to bello which 
// cannot be done as it wioll give compiler error


//PRINTING

cout<<p_message<<endl;  //printS "hello world"

//what we get whenderefrencing the ponter
cout<< *p_message<<endl;  //printS 'h' as it  sotred only starting point address of array



//if you want to modify string dont use pointer use regular hcar arrays instead
char message2 []= "Hello";
cout<<message2<<endl;
message2[1]='a';
cout<<message2<<endl;

*/
//so if we wnt to oly store string and print it out and not modify we can do this
const *p_message {"hello world"};
}