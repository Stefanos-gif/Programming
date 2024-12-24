#include <iostream>
using namespace std;

void table(int num){
    cout <<"Multiplication table of\t" << num << endl;
    for (int i = 1; i <= num; i++)
    {
        cout <<i << " x " << num << " = " << num*i << endl;
    }
    
}

int main(){
    int num;
    cin >> num;

    table(num);


    return 0;
}