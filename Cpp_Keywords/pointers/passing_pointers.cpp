#include <iostream>
using namespace std;
void modifyValue(int* ptr) {
    *ptr = 20; // Modify the value at the address
}


int main(){

    int x = 5;
    
    cout << "Value of x before = " << x << endl;
    modifyValue(&x);
    cout << "\nValue of x after fun = " << x << endl;


    return 0;
}