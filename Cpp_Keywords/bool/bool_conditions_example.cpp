#include <iostream>
using namespace std;

int main(){
    int num;
    
    
    cout << "Give me an integer ill check if its even or not" ;
    cin >> num;
    bool iseven = (num % 2 == 0);
    if (iseven == true){
        cout << "Its even" << endl;

    }
    else if (iseven == false){
        cout << "Its an odd integer" << endl;
    }

    return 0;
}