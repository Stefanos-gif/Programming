#include <iostream>
class NumContainer {
  int number;
  public:
    explicit NumContainer(int numbe) : number(numbe) {};
    void displayNum(){
      std::cout << number << std::endl;
    }
};

int main() {
  NumContainer num1(3);
  num1.displayNum();


  return 0;
}