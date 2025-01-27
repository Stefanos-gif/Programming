#include <iostream>

namespace Bas {
    int add(int a, int b){return a+b;};
    int sub(int a, int b){return a-b;};
}
namespace Adv {
    int add(int a, int b, int c){return a+b+c;};
    int sub(int a, int b, int c){return a-b-c;};
}

int main() {
    std::cout << "lets see some normal calculations: \n";
    std::cout<< "2+3 = " << Bas::add(2,3) << '\n';
    std::cout<< "3-4 = " << Bas::sub(3,4) << '\n';
    std::cout << "2+3+4 = " << Adv::add(2,3,4) << '\n';
    std::cout << "3-4-5 = " << Adv::sub(3,4,5) << '\n';


    return 0;
}