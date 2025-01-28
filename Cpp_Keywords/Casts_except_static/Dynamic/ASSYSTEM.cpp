#include <iostream>
#include <cstdlib>

class Animal {
public:
    virtual ~Animal() {}
    virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
    void makeSound() override { std::cout << "Woof!\n"; }
    void wagTail() { std::cout << "Wagging tail!\n"; }
};

class Cat : public Animal {
public:
    void makeSound() override { std::cout << "Meow!\n"; }
    void purr() { std::cout << "Purring...\n"; }
};


void handleAnimal(Animal* animal) {
    if (Dog* d = dynamic_cast<Dog*>(animal)) {
        std::cout << "Animal is a dog!\n";
        d->makeSound();
        d->wagTail();
    }
    else if (Cat* c = dynamic_cast<Cat*>(animal)) {
        std::cout << "Animal is a cat!\n";
        c->makeSound();
        c->purr();
    }
    else {
        std::cout << "Animal is unknown!\n";
    }
}

int main() {
    srand(time(0));
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    int ra = rand() % 4;
    if (ra == 0) {
        ra += 1;
    }
    if (ra == 1) {
        handleAnimal(dog);
    }
    else if (ra > 1) {
        handleAnimal(cat);
    }
    else {
        std::cout << "Error!\n";
    }

    delete dog;
    delete cat;

    return 0;
}