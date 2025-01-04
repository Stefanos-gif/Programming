#include <iostream>

class Example{
private:
  int value;
public:
  void setVal(int value){
    this->value = value;
    }
  int getVal() const{
    return value;
  }
};


int main(){
  Example ex;
  ex.setVal(30);
  std::cout << "Value of exValue is : " << ex.getVal() << std::endl;

  return 0;
}