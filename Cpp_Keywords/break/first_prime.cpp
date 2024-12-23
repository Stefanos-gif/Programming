#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num = 101; 

    while (true) { 
        bool isPrime = true; 

       
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) { 
                isPrime = false;
                break;
            }
        }

        if (isPrime) { 
            cout << "The first prime bigger than 100 is: " << num << endl;
            break; 
        }

        num++; 
    }

    return 0;
}
