#include <iostream>
#include <string>
using namespace std;



// FUNCTION -   function is a reusabble block of code that can take
//  some optional input and produce some desirable output.
// function with input and returns
double rectarea(double length,double breadth){
    double area=length*breadth;
    return area;
}

// 2nd
int max(int a ,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

// function with input and but returns nothing does processing and or gives print/gives result explicitly
void can_vote(unsigned int age){
    if(age >=18){
        cout<<"you are "<<age <<" you can vote "<<endl;
    }
    else{
        cout<<"Sorry you are too young for this."<<endl;
    }
    // return;     //optional and is valid cpp syntax eveb if you use it or not here .
    }


// function with no input but returns nothing
void say_Hello(){
    cout<<"Hello there"<<endl;
}


// function whith no inpt but returns something
    int lucky_no(){
        return {9};
    }



int main() {
    /*can_vote(19);  //function calling with passing argument
    can_vote(16);
    // use of /calling function in a loop
    for(size_t i{1} ; i < 19 ;++i){
        can_vote(i);
    } */
/*
    int result =max(19 ,20);
    cout<<result <<" is max no"<<endl;
    result = max(5 , 2);
    cout<<result <<" is max no"<<endl;
    */

   say_Hello();
   cout<<"Lucky no: "<<lucky_no()<<endl;

}