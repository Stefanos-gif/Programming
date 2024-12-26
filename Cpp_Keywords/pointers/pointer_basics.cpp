#include<iostream>

using namespace std;

int main(){
    int x = 89;
    int* ptr = &x;

    cout << "X value: " << x << endl;
    cout << "X memory adress: " << &x << endl;
    cout << "Ptr : " << ptr << endl;
    cout << "Ptr value: " << *ptr << endl;


    return 0;
}