#include <iostream>

using namespace std;

int main(){

    int let;

    cout << "Give me a character : " ;
    cin >> let;

    cout << "Character: " << let << endl;
    cout << "Ascii value: " << int(let+1) << endl;


    return 0;
}