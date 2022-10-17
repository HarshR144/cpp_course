#include <iostream>
#include <string>
using namespace std;


int main() {
int value {30};
int& ref_value {value};
//or int& ref_value = value;

cout<<"value"<<value<<endl;
cout<<"ref_value"<<ref_value<<endl;
cout<<"&value"<<&value<<endl;
cout<<"&ref_value"<<&ref_value<<endl;
// they have same values and address
cout<<"-------------------------"<<endl;
value = 10;
cout<<"value"<<value<<endl;
cout<<"ref_value"<<ref_value<<endl;

ref_value=11;
cout<<"value"<<value<<endl;
cout<<"ref_value"<<ref_value<<endl;

}