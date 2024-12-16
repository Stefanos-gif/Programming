#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int size = num;
    int factorial;
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    cout << result << endl;

}