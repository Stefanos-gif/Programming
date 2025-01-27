#include <iostream>
using namespace std;

int main() {
    int x = 5;
    double y = 10.5;

    decltype(x + y) result = x + y;

    cout << "The result of x + y is: " << result << endl;

    decltype(x) a = 20;     
    decltype(y) b = 30.75;

    cout << "a (int): " << a << endl;
    cout << "b (double): " << b << endl;

    return 0;
}
