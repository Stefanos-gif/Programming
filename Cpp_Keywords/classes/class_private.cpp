#include <iostream>

class rectangle {
private:
  int width, height;
public:
  rectangle(int w, int h) : width(w), height(h) {}

  int GetLength() {
    return width;
  }

  int GetHeight() {
    return height;
  }

  void setWidth(int w) {
    if (w < 0) {
      std::cerr << "Width cannot be negative." << std::endl;
      return;
    }
    width = w;
  }

  void setHeight(int h) {
    if (h < 0) {
      std::cerr << "Height cannot be negative." << std::endl;
      return;
    }
    height = h;
  }
};

int main() {
  rectangle r(10, 20);
  std::cout << r.GetLength() << std::endl;
  std::cout << r.GetHeight() << std::endl;

  r.setWidth(100);
  r.setHeight(200);

  std::cout << "\n---------------\tUpdated values are: \n" << std::endl;
  std::cout << r.GetLength() << std::endl;
  std::cout << r.GetHeight() << std::endl;

  return 0;
}