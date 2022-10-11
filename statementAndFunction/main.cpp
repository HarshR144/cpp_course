#include <iostream>

int AddNumbers(int First_param, int Second_param){

  int sum = First_param + Second_param;
  return sum;
}
int main() {
  
int First_no {3};
int Second_no {7};
std::cout<<"First no:"<<First_no<<std::endl;

std::cout<<"Sum:"<<AddNumbers(First_no, Second_no)<<std::endl;
}