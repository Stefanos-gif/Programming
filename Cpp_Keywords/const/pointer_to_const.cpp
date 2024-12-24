#include <iostream>
using namespace std;

int main(){

    int x = 5, y = 10;
    const int* constintptr = &x;
    cout << constintptr << endl;
    /*  "constintptr = 4;"wont compile because we made the value constant.*/  
    constintptr = &y;//Allowed because we set the value as constant not where its pointed, we still wont be able to change the y 
    cout << constintptr;
    return 0;
}