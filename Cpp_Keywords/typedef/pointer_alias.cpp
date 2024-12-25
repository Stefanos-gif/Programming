#include <iostream>

using namespace std;

int main(){

    typedef int* pint;
    int num = 1;
    pint numptr = &num;
    cout << num << &num << endl << numptr;


    return 0;
}