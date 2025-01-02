#include <iostream>

class rectangle {
private:
    int width, height;
public:
    rectangle(int w, int h) : width(w), height(h) {}
    int area() {
        return width * height;
    }
};

int main() {
    rectangle r(10, 20);
    std::cout << r.area() << std::endl;

}