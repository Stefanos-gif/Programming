#include <iostream>

void basicReinterpret() {
    int num = 3;

    int *np = &num;
    char *charpp = reinterpret_cast<char *>(np);
    for (int i = 0; i < sizeof(int); i++)
    {
        std::cout << "Place of " << i << " bite is = " << static_cast<int>(charpp[i]) << std::endl;
    }
}

int main() {
  basicReinterpret();
}