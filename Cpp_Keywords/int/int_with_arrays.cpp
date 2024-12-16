#include <iostream>

using namespace std;

int main(){
    int numar[5] = {1,2,3,4,5};
    int sum;
    for(int i = 0; i<5; i++){
        sum = sum+numar[i];
    }
    cout << sum;
    return 0;
}