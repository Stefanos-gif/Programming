#include <iostream>
using namespace std;

int main() {
    int ar[5] ;
    int* par[5];
    int count = sizeof(ar)/sizeof(ar[1]);
    cout << "Give me five numbers that will be put in an array:\t" ;
    for (int i = 0; i < count; i++){
        cin >> ar[i];
    }
    
    for (int i = 0; i < count; i++){
        par[i] = &ar[i];
    }
    for (int i = 0; i < count; i++){
        cout << "Value at par[" << i << "] is:\t" << *par[i] << endl;
    }
    
    

    return 0;
}
