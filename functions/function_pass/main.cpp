#include <iostream>
#include <string>
using namespace std;


// void say_age(int* age);
void say_age(int& age);

int main(){
int age {20};
cout<< "Before :"<<age<<endl;
say_age(age);
cout<< "after:"<<age<<endl;

}
// void say_age(int* age){
//     ++(*age);
//     cout<<"you are "<< *age << "years old." <<endl;

// }
void say_age(int& age){
    ++age;
    cout<<"you are "<< age << "years old." <<endl;

}