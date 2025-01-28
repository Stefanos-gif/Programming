#include <iostream>

void viewNumber() {
    // Create a simple integer
    int num = 45;
    // Look at it as character data
    char *charptr = reinterpret_cast<char*>(&num);

    // Print first character value
    std::cout << "First character ptr value is: " << (int)charptr[0] << "\n";
}

int main() {
    viewNumber();
    return 0;
}