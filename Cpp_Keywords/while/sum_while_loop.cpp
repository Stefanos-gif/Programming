//Take an integer input and calculate the sum of all numbers from 1 to that integer using a while loop.
#include <iostream>


using namespace std;

int main(){

    int num;
    int i=1;
    int sum = 0;

    cin>>num;

    while(i<=num){
        sum += i;
        i++;
    }
    cout << sum;



    return 0;
}