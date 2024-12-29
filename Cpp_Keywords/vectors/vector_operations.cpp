#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  cout << "Here is the vector elements: " << endl;
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;
  cout << "/n Now lets remove the last element and add something else:\n" << endl;
  v.pop_back();
  v.push_back(4);
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;

  return 0;
}