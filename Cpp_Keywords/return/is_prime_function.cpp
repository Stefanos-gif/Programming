// 2-arithmo, arithmos , i<num-1,i++ if num mod i ==0 
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) { 
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) { 
            return false;
        }
    }

    return true; 
}

int main(){

    int numm;
    cin >> numm;
    bool prime = isPrime(numm);

    if (prime == true)
    {
        cout << " Thats a prime number" << endl;
    }
    else if(prime == false)
    {
        cout << "Not a prime;" << endl;
    }
    
     

    return 0;
}