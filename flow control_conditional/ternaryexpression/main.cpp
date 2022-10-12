#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main() {
int voting_age_limit=18;
int age ;
cout<<"please input age:";
cin>>age;
string result = (age == voting_age_limit) ? "you are eligible to vote":"Sorry you are not eligible.";
cout<<result;



}