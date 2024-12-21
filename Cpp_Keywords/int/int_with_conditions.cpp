#include<iostream>

using namespace std;

int main(){

    int num = 23;

    if (num > 0){
        cout << "The number's is a Positive";
    }
    else if (num<0){
         cout << "The number is a negative";
    }
    else if(num == 0){ 
        cout << "Num is 0";
    }
    return 0;
}