#include <iostream>

class base{
public:
  void Msg(){
    std::cout<<"I am base"<<std::endl;
  }
};

class derived:public base{
  public:
    void Msg(){
      std::cout<<"I am derived"<<std::endl;
    }
}