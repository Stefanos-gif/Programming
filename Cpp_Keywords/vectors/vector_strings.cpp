#include<iostream>
#include<vector>

void populate_vecStrings(std::vector<std::string> &a){
  std::string names;
  bool choice = false;

  while (choice != true){
    std::cout<< "Enter  string: ";
    std::cin >> names;
    a.push_back(names);
    std::cout<< "Enter  string: ";
    std::cin >> names;
    a.push_back(names);
    std::cout<< "Stop now?\n\t(1(yes)/0(no)): ";
    std::cin >> choice;
    std::cout << std::endl;
  }
}


int main(){
  std::cout << "welcome to vector strings!" << std::endl;
  std::vector<std::string> v;
  populate_vecStrings(v);

  for (int i = 0; i < v.size(); i++){
    std::cout << i+1 << " string: " << v[i] << std::endl;
  }

  return 0;
}