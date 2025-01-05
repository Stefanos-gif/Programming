#include<iostream>

int main(){
  enum colour{red,blue,yellow,green};
  colour colour = green;
  int cnumber = static_cast<int>(colour);
  std::cout << cnumber << std::endl;



  return 0;
}