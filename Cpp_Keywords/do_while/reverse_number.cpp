//Write a program to reverse a given number using a do-while loop.
#include <iostream>

using namespace std;

int main(){

    int num;
    int reverse = 0;
    
    cout << "Give me a number and i'll reverse it for you: ";
    cin >> num;

    do
    {
        reverse = reverse * 10 + (num % 10);
        num = num / 10;


    } while (num != 0);

    cout << "Number: " <<  num << "\n";
    cout << "Reversed Number: " << reverse << endl;

    return 0;
}