#include <iostream>

int main(){
  int *ptr = new int(21);
  std::cout << "Newly allocated memory value is : " << *ptr << std::endl;
  delete ptr;
  std::cout << "\n\tMemory freed successfully...\n " << std::endl;




  return 0;
 }