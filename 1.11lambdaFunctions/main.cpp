#include <iostream>
#include <string>
using namespace std;
int main() {
/*lambda function signature:
   [capture list](parameters)->return type {
    // function body

   };
   
*/

// one way to call it is to give it a name and so we have to assign it to a varaible 
// and this basically we are going to be a handle we have hereto the lambda funcn and 
// wee can use this handle to do things with lambda function.
/*auto func = [](){
    cout << "Hello World!" << endl;
};
func();
*/

// CALLING LAMBDA FUNCTION DIRECTLY this way you can call the lambda function only once.
/*[](){
    cout << "Hello World!" << endl;
}()*/

//LSMBDA FUNCTION USING PARAMETERS 

// [](double a, double b){
//     cout << "(a + b): " << (a + b) << endl;
// }(10.0,5.0);

/*
auto result = [](double a, double b){
    cout << "(a + b): " << (a + b) << endl;
};

result(10.0,2.0);
result(5,10);*/

// Lambda function that returns something
/*
[](double a, double b){
  return (a + b);
}(20,30);   // FUNCTION IS RETURNING SOMETHING 
            // BUT WE ARE NOT DOING ANYTHING WITH THE RETURNED VALUE 
*/


// USING THE RETURN VALUE BY ASSIGNING IT TO A VARIABLE  BUT HERE THIS 
// LAMBDA FUNCTION CAN BE USED ONLY ONCE
/*
auto result1 = [](double a, double b){
  return (a + b);
}(20,30);

// cout<<"result1: "<< result1 << endl;
cout<<"result2: "<< [](double a, double b){
  return (a + b);
}(20,30)<<endl;
*/

/*
auto func2 = [](double a, double b){
  return (a + b);
};
auto result3 = func2(11,14);
auto result4 = func2(20,20);


cout<<"result3: "<< result3 << endl;
cout<<"result4: "<< result4 << endl;
cout<<"Direct call: "<< func2(10, 20) << endl;
*/


// // SPECIFY RETURN TYPE ECPLICITLY
// auto func3 = [](double a, double b)->int{
//   return (a + b);
// };

// auto func4 = [](double a, double b){
//   return (a + b);
// };
// double a {1.2};
// double b {2.3};
// auto result3 =func3(a,b);
// auto result4 =func4(a,b);
// cout<<"result func3: "<< result3 << endl;
// cout<<"result func4: "<< result4 << endl;

// cout<<" sizeof result3: "<< sizeof(result3) << endl;
// cout<<"sizeof result4: "<< sizeof(result4) << endl;

//|------------------------------------------------------------------|
/*
// CAPTURE LIST-we can have access to things declared and define outisde throught capture list
// capture by value-in this method what we have in lambda function is a copy
int c {2};
auto func5 = [c](){
    cout<< "Inner value: "<< c <<endl;
};
for (size_t i {0}; i<5;++i){
    func5();
    cout <<"outer calue: "<<c <<endl;
    cout <<"--------------"<<endl;
    ++c;
}
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
// CAPTURE BT REFRENCE- working on original outside value 
c =2;
auto func6 = [&c](){
    cout<< "Inner value: "<< c <<endl;
};
for (size_t i {0}; i<5;++i){
    func6();
    cout <<"outer calue: "<<c <<endl;
    cout <<"--------------"<<endl;
    ++c;
}*/
/*
// //////////////////////////////////////////////////
// CAPTURE ALL BY VALUE -put =
auto func6 = [=](){
    cout<< "Inner value: "<< c <<endl;
};
for (size_t i {0}; i<5;++i){
    func6();
    cout <<"outer calue: "<<c <<endl;
    cout <<"--------------"<<endl;
    ++c;
}
// CAPTURE ALL BY REFRENCE-PUT &
auto func6 = [&](){
    cout<< "Inner value: "<< c <<endl;
};
for (size_t i {0}; i<5;++i){
    func6();
    cout <<"outer calue: "<<c <<endl;
    cout <<"--------------"<<endl;
    ++c;
}*/
return 0;
}