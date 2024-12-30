#include <iostream>

int main(){
  const int x = 5;
  std::cout << x << std::endl;
  std::cout << "Lets try to change the value of x" << std::endl;
  //constexpr x = 10;
  std::cout<<"Compile error" << std::endl;



  return 0;
}