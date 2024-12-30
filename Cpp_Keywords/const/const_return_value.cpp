#include <iostream>

int const f(int &x){
  return x+5;
}



int main(){
  int x = 5;
  std::cout << f(x) << std::endl;


  return 0;
}