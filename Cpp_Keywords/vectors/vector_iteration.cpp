#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1a0};
  cout << "Heres a traditional loop: " << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }
  cout << endl;
  cout << "Now using a range-based for loop: " << endl;
  for (auto num : v) {
    cout << num << endl;
  }
  cout << endl;



  return 0;

}