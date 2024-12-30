#include<iostream>

int main(){
  const int x = 5;
  const int *p = &x;
  std::cout << "Value of pointer on a constant value: " << *p << std::endl;
  std::cout << "Another use of const:\n" << std::endl;
  int y = 5;
  const int *p1 = &y;
  std::cout << "Value of y: " << y << std::endl;
  y = 10;
  std::cout << "New value of y: " << y << std::endl;
  std::cout << "Copy of old value of y: " << *p1 << std::endl;



  return 0;
}