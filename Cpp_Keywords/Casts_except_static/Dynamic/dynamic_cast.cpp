#include <iostream>

class Shape {
public:
  virtual ~Shape() {}  // Make it polymorphic
  virtual void draw() { std::cout << "Drawing shape\n"; }
};

class Circle : public Shape {
public:
  void draw() override { std::cout << "Drawing circle\n"; }
  void radius() { std::cout << "Circle radius: 5\n"; }
};

class Square : public Shape {
public:
  void draw() override { std::cout << "Drawing square\n"; }
  void side() { std::cout << "Square side: 4\n"; }
};

void identifyShape(Shape* shape) {
  std::cout << "Identifying Shape\n";
  if (dynamic_cast<Circle*>(shape)) {
    std::cout << "Circle shape\n";
    Circle *c = dynamic_cast<Circle*>(shape);
    c->draw();
    c->radius();

  }
  if (dynamic_cast<Square*>(shape)) {
    std::cout << "Square shape\n";
    Square *s = dynamic_cast<Square*>(shape);
    s->draw();
    s->side();
  }
}

int main() {
  Shape* circle = new Circle();
  Shape* square = new Square();

  identifyShape(circle);

  delete circle;
  delete square;
  return 0;
}