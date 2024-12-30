#include <iostream>

int valu(){
  return 2;
}

int main() {
  auto value = valu();
  std::cout << "\nThis is the function value:\n\t\t\t   " <<  value << std::endl;


  return 0;
}