#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Give me a random integer: " ;
    cin >> num;

    if (num > 0){
        cout << "The number is a positive!" << endl;
    }
    else if (num > 0){
        cout << "the number is a negative!" << endl;
    }
    else if(num == 0){
        cout << "The numbers zero." << endl;
    }
    else{
        cout << "Something went wrong." << endl;
    }

    return 0;
}