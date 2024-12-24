#include <iostream>

using namespace std;

void counter() {
    static int count = 0; // Retains its value between function calls
    count++;
    cout << "Function call Count: " << count << endl;
}


int main(){
    counter();
    counter();
    counter();


    return 0;
}