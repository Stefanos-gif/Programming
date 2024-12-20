#include <iostream>


using namespace std; 


int main (){

    int num;
    cout << "Give me an integer: ";
    cin >>num;
    cout << "--------Multiplication table--------" << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << num << " x " << i << " = " << i*num << endl;
    }
    




    return 0;
}