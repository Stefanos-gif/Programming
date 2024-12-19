#include <iostream>

using namespace std;

int main(){

    float num1, num2;
    char op;

    cout << " Give me two numbers you'd like to do something with:" ;
    cin >> num1;
    cin >> num2;

    cout << "Choose between a for addition, s for subtraction, m for multiplication, d for devision: ";
    cin >> op;

    switch (op)
    {
    case 'a':
        cout<< "The answer of " << num1 << " + " << num2 << ": " << num1+num2 << endl;
        break;
    case 's':
        cout<< "The answer of " << num1 << " - " << num2 << ": " << num1-num2 << endl;
        break;
    case 'm':
        cout<< "The answer of " << num1 << " * " << num2 << ": " << num1*num2 << endl;
        break;
    case 'd':
        cout<< "The answer of " << num1 << " / " << num2 << ": " << num1/num2 << endl;
        break;
    
    
    }

    

    


    return 0;
}