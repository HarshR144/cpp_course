#include <iostream>
#include <iomanip>
using namespace std;
int main() {

int no1 {10};
int no2 {20};
bool result =(no1 > no2);
cout<<boolalpha<<result<<endl;


if (result == true){
cout<<"Yes no1 is greater than no 2"<<endl;
}
/*if(!(result == true)) {      //if not result is true
cout<<"NO, no1 is smaller"<<endl;
}*/
else {
cout<<"NO, no1 is smaller"<<endl;

cout<<endl;
cout<<"------------------------------------";

bool light_green =true;
bool police_stops =true;

cout<<"police"<<endl;
if (light_green){
    cout<<"lets go"<<endl;
    if(police_stops){
        cout<<"stop"<<endl;
    }
}






}