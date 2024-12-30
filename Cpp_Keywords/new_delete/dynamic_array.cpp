#include <iostream>

int main(){
  int *ptr = new int[100];
  for(int i = 0; i < 100; i++){
    ptr[i] = i*i*i*i*i*i*i*i*i/-1;
  }
  for (int i = 0; i < 100; i++){
    std::cout << ptr[i] << std::endl;
  }
  delete [] ptr;


  return 0;
}
