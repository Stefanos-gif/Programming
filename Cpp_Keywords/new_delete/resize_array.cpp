#include <iostream>

int main(){
  int *p = new int[5];
  for(int i = 0; i < 5; i++){
    p[i] = i*10;
  }
  int *p1 = new int[10];
  for(int i = 0; i < 5; i++){
    p1[i] = p[i];
  }
  delete [] p;
  for(int i = 0; i < 10; i++){
    std::cout << p1[i] << std::endl;
  }


  return 0;
}