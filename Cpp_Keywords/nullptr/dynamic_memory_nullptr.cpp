#include <iostream>
using namespace std;
int main() {
  int *ptr = nullptr;
  ptr = new int;
  *ptr = 42;

  cout << "Value: " << *ptr << endl;

  delete ptr;
  ptr = nullptr;

  if (ptr == nullptr){
    cout << "Pointer is safely nullified! Exiting..." << endl;
    return 0;
    }

  return 0;
}