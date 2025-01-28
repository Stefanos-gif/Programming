#include <iostream>

class Vehicle {
public:
    virtual ~Vehicle() {}
    virtual void start() { std::cout << "Vehicle starting\n"; }
};

class Car : public Vehicle {
public:
    void start() override { std::cout << "Car starting\n"; }
    void honk() { std::cout << "Beep beep!\n"; }
};

class Bicycle : public Vehicle {
public:
    void start() override { std::cout << "Pedaling bicycle\n"; }
    void ringBell() { std::cout << "Ring ring!\n"; }

};




void handleVehicle(Vehicle& vehicle) {

  if (dynamic_cast<Car*>(&vehicle) != nullptr) {
    Car* car = dynamic_cast<Car*>(&vehicle);
    car->start();
    car->honk();
  }
  else if (dynamic_cast<Bicycle*>(&vehicle) != nullptr) {
    Bicycle* bicycle = dynamic_cast<Bicycle*>(&vehicle);
    bicycle->start();
    bicycle->ringBell();
  }
  else {
    std::cout << "Unknown vehicle type\n";
  }
}

int main() {
    Vehicle *car = new Car;
    Vehicle *bike = new Bicycle;
    handleVehicle(*bike);

    delete car;
    delete bike;
    return 0;
}