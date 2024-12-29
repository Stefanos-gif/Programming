#include <iostream>
#include <vector>

int main() {
  std::vector <int> v;
  std::cout << "Initial Vec size: " << v.size() << ", Initial capacity: " << v.capacity() << std::endl;
  v.resize(5);
  std::cout << "Updated size: " << v.size() << ", capacity: " << v.capacity() << std::endl;
  v.resize(10);
  std::cout << "(after resizing to 10)Updated size: " << v.size() << ", capacity: " << v.capacity() << std::endl;
  v.resize(3);
  std::cout << "(after resizing to 3)Updated size: " << v.size() << ", capacity: " << v.capacity() << std::endl;



  return 0;
}