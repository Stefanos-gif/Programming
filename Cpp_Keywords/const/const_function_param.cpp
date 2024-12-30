#include <iostream>

void sreturn(const std::string &name){
  std::cout << name << std::endl;
}


int main(){
  std::string name = "Stefa";
  sreturn(name);

  return 0;
}