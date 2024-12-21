//Write a program to calculate the sum of the digits of a number using a do-while loop.
#include <iostream>

using namespace std;

int main(){

    int num;
    int sum = 0;
    
    cout << "Give me a number ill find the sum (eg: 123 => 1+2+3):__ ";
    cin >> num;

    do
    {
        sum += num % 10;
        num = num / 10;
    } while (num > 0);
    
    cout << "\n";
    cout << "\n";
    cout << "The sum is: " << sum << "\n" ;


    return 0;
}