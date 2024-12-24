#include<iostream>

using namespace std;

int MaxFunction(int a, int b){
    return a*b;
}

int main(){

    int num1;
    int num2;

    cout << "Give me two numbers:\t";
    cin >> num1 >> num2;

    cout << "Max of the numbers:\t" << MaxFunction(num1,num2) << endl;



    return 0;
}