#include <iostream>
#include <vector>

int main() {
  std::vector <std::vector<int>> v ;

  std::cout << "Welcome to your own vector matrix!!!\n" << std::endl;

  int rows;
  std::cout << "Enter number of rows: ";
  std::cin >> rows;
  int place;
  std::cout << "Enter number of places in each row: ";
  std::cin >> place;

  v.resize(rows);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < place; j++) {
      int num;
      std::cout << "Enter number: ";
      std::cin >> num;
      v[i].push_back(num);
    }
    std::cout << i+2 << " row=>" << std::endl;
  }

  std::cout << "Matrix form of vector: " << std::endl;
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      std::cout << v[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}