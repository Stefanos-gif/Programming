#include <iostream>

using namespace std;

int main(){
    int* ptr = new int;
    *ptr = 9;

    cout << "Value: " << *ptr << endl;

    delete ptr;
    cout << ptr;
    
    return 0;
}