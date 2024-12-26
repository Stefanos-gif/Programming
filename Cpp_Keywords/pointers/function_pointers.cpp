#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}


int main(){
    int x = 5;
    int y = 10;
    int (*funcPtr)(int, int);
    funcPtr = &add;

    int sum = funcPtr(x,y);
    cout << "\nSum: " << sum << "\n" << endl;
    


    return 0;
}