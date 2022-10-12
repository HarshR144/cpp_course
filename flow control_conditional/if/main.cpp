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
cout<<"NO, no1 is smaller"<<endl;}

cout<<endl;
cout<<"------------------------------------";

bool light_green =true;
bool police_stops =true;

cout<<"police"<<endl;
if (light_green){
    cout<<"lets go"<<endl;
    if(police_stops){
        cout<<"stop"<<endl;
    }}

cout<<"-------------------------"<<endl;
// bool light_red =false;
// bool light_yellow =false;
// if (light_red)
// {
//     cout<<"stop";

// }

// if (light_green)
// {
//     cout<<"go";

// }
// if (light_yellow)
// {
//     cout<<"slow";

// }

// const bool pen = true;
// const bool eraser = true;
// const bool pencil = false;
// const bool line = false;
// const bool paint = false;
// const bool tool = true;

//ORRRR


const int eraser = 10;

const int pencil = 20;
const int paint = 340;
const int line = 40;
const int pen = 20;

int tool = pen;



if (tool == pen){
    cout<<"Active tool pen";

}




else if (tool == eraser){
    cout<<"Active tool eraser";
}
else if (tool == paint){
    cout<<"Active tool paint";

}
else if (tool == line){
    cout<<"Active tool line";

}

}