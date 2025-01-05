#include<iostream>

class b;

class a {
private:
  int y;
public:
  friend void displayclasses(a sum, b summ);
  void setYvalue(int j){
    y = j;
  }
};
class b {
  private:
    int x;
  public:
  friend void displayclasses(a sum, b summ);
  void setXvalue(int g){
    x = g;
  }
};
void displayclasses(a sum, b summ) {
  std::cout <<"X value: " << sum.y << std::endl;
  std::cout <<"Y value: " << summ.x << std::endl;
}

int main() {

  a avar;
  avar.setYvalue(10);
  b bvar;
  bvar.setXvalue(20);
  displayclasses(avar, bvar);

}