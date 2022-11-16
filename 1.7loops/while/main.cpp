#include <iostream>
#include <string>
using namespace std;

const size_t COUNT =10; // count declared

int main() {
//while loop 
unsigned int i{0};
while (i< COUNT)
{
    cout<<" I love cpp "<< i<<endl;
    ++i;
}
cout<<"------------------"<<endl;

//do while;
size_t j {0};
do
{
    cout<<" I love cpp ["<< i<<"]"<<endl;
    i++;
} while (i<COUNT);

}