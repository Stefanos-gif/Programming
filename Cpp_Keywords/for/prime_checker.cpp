#include <iostream> 
#include<cmath>
using namespace std;

int main (){

    int num;
    bool isPrime = true;

    cout << "Give me an integer" << endl;
    cin >> num;

    if (num <= 1){
        cout << "Its not a prime" << endl;
    }
    else{
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) { 
                isPrime = false;
                break;
            }

        }
        if (isPrime == false){
            cout << "Not a prime"<<endl;
        }
        else if (isPrime == true){
            cout <<"prime" <<endl;
        }
    }



    return 0;
}