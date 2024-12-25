#include <iostream>
using namespace std;

constexpr int Fibonacci(int n) {
    return (n <= 2) ? 1 : (Fibonacci(n - 1) + Fibonacci(n - 2));
}

int main(){
    constexpr int fib10 = Fibonacci(10); 
    cout << fib10;
    
    
    return 0;
}