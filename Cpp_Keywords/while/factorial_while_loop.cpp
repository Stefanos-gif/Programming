//Write a program to calculate the factorial of a number using a while loop.
#include <iostream>


using namespace std;

int main(){

    int num;
    int i=2;
    int sum = 1;

    cin>>num;

    while(i<=num){
        sum *= i;
        i++;
    }
    cout << sum;



    return 0;
}