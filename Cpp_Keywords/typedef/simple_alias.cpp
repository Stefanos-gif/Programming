#include <iostream>

using namespace std;


int main(){
    typedef unsigned int uint;
    typedef const int cint;
    uint unint1 = 100;
    cint constint1 = 200;

    cout << "Unsigned int:\t" << unint1 << "\nConstant int:\t" << constint1 << endl;


    return 0;
}