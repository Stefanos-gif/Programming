#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = {10,20,30,40,50};
  std::cout << "Using a range based for loop:" << std::endl;
  for (auto i : v) {
    std::cout << i << std::endl;
  }
  std::cout << std::endl;

  std::cout << "Using a for loop:" << std::endl;
  for (int i = 0; i < v.size(); i++) {
    std::cout << "i = " << i << ", v[" << i << "] = " << v[i] << std::endl;
  }

  return 0;
}