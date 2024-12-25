#include <iostream>

using namespace std;

constexpr int square(int x) {
    return x * x;
}

int main(){
    constexpr int result = square(5);

    cout << result << endl;


    return 0;
}