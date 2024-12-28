#include <iostream>
using namespace std;
int main(){
  int x = 8;
  int *p = &x;
  cout << "Value of p: " <<  *p << endl;
  p = nullptr;
  cout << "Value of p: " << 0 << endl;
  cout << "Adress of p: " << p << endl;
  cout << "\nWant to test pointer to see if null?\n\t\t(y)(n):\t";
  char choice;
  cin >> choice;
  switch (choice) {
    case 'y':
      if (p == nullptr) {
        cout << "Value of p is null" << endl;
      }
      else {
        cout << "Value of p is " << p << endl;
      }
      break;
    default:
      cout << "Okay!" << endl;
      return 0;

  }
  return 0;

}