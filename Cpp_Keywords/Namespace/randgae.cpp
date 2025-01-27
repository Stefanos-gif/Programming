#include <iostream>

namespace Game {
    namespace Heroes {
        class Warrior {
            std::string name;
            int health;
        public:
            Warrior(std::string n) : name(n), health(100) {}
            void attack() { std::cout << name << " swings sword!" << std::endl; }
        };
    }

    namespace Monsters {
        class Dragon {
            int firepower;
        public:
            Dragon() : firepower(50) {}
            void breatheFire() { std::cout << "Dragon unleashes " << firepower << " damage!" << std::endl; }
        };
    }
}

int main() {
    Game::Heroes::Warrior hero("Arthur");
    Game::Monsters::Dragon enemy;

    hero.attack();
    enemy.breatheFire();
    return 0;
}