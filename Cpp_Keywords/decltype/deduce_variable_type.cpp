#include <iostream>

int main(){

  int a = 55;
  decltype(a) b = 20;
  std::cout << a << std::endl;
  std::cout << b << std::endl;

  return 0;
}