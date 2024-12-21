//Implement a program to calculate the factorial of a number using a do-while loop.
#include <iostream>

using namespace std;

int main (){

    int num;
    int sum = 1;
    int i = 1;
    cout << "Give me a number: ";
    cin >> num;
        
    do
    {
        sum *= i;
        i++;
    } while (i < num + 1);
    
    cout << "Factorial: " << sum;

    return 0;
}