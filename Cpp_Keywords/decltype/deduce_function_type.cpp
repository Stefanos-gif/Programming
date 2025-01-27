#include <iostream>

auto summ(int a, int b){
  return a + b;
}


int main(){
  decltype(summ(2.5,3.5)) result = 3;
  std::cout << summ(2, 3) << std::endl;
  std::cout << result << std::endl;

  return 0;
}