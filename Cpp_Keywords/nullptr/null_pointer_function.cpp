#include <iostream>
using namespace std;

void ptChecker(int *p){
  if(p == nullptr){
    cout<<"pointer is null"<<endl;
  }
  else{
    cout<<"pointer is valid"<<endl;
  }
}

int main(){
  int x = 8;

  char n;
  cout << "Value of p is x\n"  << endl;
  while (true){
    int *p = &x;
    cout<<"Do you want the pointer to be nullified: (y/n) ";
    cin>>n;
    if(n == 'y'){
      p = nullptr;
      ptChecker(p);
    }
    else{
      ptChecker(p);
    }
  }



  return 0;
}