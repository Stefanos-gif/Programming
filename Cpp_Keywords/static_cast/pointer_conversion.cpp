#include<iostream>

int main(){
  int x = 5;
  void* ptr = &x;
  int* Fp = static_cast<int*>(ptr); // Converts void* to int*

  std::cout << *Fp << std::endl;

  return 0;
}