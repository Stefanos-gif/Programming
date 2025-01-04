#include <iostream>


class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle() : width(0), height(0) {}


    Rectangle& setWidth(int w) {
        width = w;
        return *this;
    }

    Rectangle& setHeight(int h) {
        height = h;
        return *this;
    }
    void display() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(10).setHeight(20);
    rect.display();

    return 0;
}
