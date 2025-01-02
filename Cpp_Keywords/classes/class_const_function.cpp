#include<iostream>
class rectangle{
public:
  int width, height;
  int area() const {
    return width * height;
  }
};


int main(){
  rectangle r;
  r.width = 10;
  r.height = 20;
  std::cout << r.area() << std::endl;




  return 0;
}