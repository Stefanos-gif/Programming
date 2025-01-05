#include <iostream>

class aclas {
private:
  int a;
  int b;
public:
  void setValues(int a, int b) {
    this->a = a;
    this->b = b;
  }
  friend class auser;
};

class auser {
public:

  void display(aclas a1){
    std::cout<<"a:"<<a1.a<<std::endl;
    std::cout<<"b:"<<a1.b<<std::endl;
  }
};


int main() {
  aclas a1;
  a1.setValues(1, 2);
  auser a1_user;
  a1_user.display(a1);

  return 0;
}