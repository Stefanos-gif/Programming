#include <iostream> 
using namespace std;

int main(){
    int x = 5;
    int *p = &x;
    int **pp = &p;

    cout << "Value of x: " << x << endl;          // 10
    cout << "Value at *p: " << *p << endl;        // 10
    cout << "Value at **pp: " << **pp << endl;    // 10
    cout << "Address of x: " << p << endl;        // Address of x
    cout << "Address of p: " << pp << endl;       // Address of p


    return 0;
}