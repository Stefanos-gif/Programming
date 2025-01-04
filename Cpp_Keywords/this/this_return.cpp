#include<iostream>

class A{
private:
  int x = 10;
public:

  int getX() const{
    return this->x;
    }
};



int main(){

  A example;
  std::cout << example.getX() << std::endl;


  return 0;
}