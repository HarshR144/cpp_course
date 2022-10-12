#include <iostream>
#include <iomanip>
using namespace std;
int main() {

int no1 {10};
int no2 {20};
bool result {no1 > no2};
cout<<boolalpha;


if (result == true){
    cout<<"Yes no1 is greater than no 2"<<endl;
}
if (result != false) {
    cout<<"NO, no1 is smaller"<<endl;
}

return 0;
}