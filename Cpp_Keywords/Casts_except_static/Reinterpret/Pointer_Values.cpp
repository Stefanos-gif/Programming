#include <iostream>

void showptVal(){
    int v = 4;
    int *p = &v;

    long addressNumber = reinterpret_cast<long>(&p);
    std::cout << "Adress as a number: " << addressNumber << std::endl;


}

int main(){

  showptVal();
  return 0;
}