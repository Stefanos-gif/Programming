#include<iostream>

enum choice{YES = 1,NO = 0};

class TopSecretVariable {
private:
    int a;
    int b;
public:
    void setSecretV(int x) {
        a = x;
        b = a*a;
    }
    friend void AccessSecretVariable(TopSecretVariable);
};

void AccessSecretVariable(TopSecretVariable var) {
    std::cout << "a variable: " << var.a << std:: endl;
    std::cout << "b variable: " << var.b << std::endl;
}

int main() {
    TopSecretVariable shh;
    std::cout << "Hello Give me a top secret intiger: ";
    int g;
    std::cin >> g;
    shh.setSecretV(g)
    std::cout << "Want to access your variable?\n0)No\n1)Yes\n\t...";
    int input;
    std::cin >> input;

    switch (input) {
        case NO:
            std::cout << "\nOkay.." << std::endl;
            return 0;
            break;
        case YES:
            AccessSecretVariable(shh);
            return 0;
            break;
    }

    return 0;
}