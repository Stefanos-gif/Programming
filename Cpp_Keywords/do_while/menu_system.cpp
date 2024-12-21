/*Implement a program that shows a menu to the user.
Use a do-while loop to repeatedly display the menu until the user chooses to exit.*/
#include <iostream>

using namespace std;

int main(){
    int choc;
    bool ex = false;

    do
    {
        cout << "--------Stef's menu----------"<<endl;
        cout <<"1) Steak" << endl;
        cout <<"2) Pasta" << endl;
        cout <<"3) Exit" << endl;
        cout << "Choice:________ ";
        cin >> choc;

        switch (choc)
        {
        case 1:
            cout << "You've selected a steak!" << endl;
            break;
        case 2:
            cout << "You've selected a Pasta!" << endl;
            break;
        case 3:
            ex = true;
            cout << "Goodbye! Hope you visit again.." << endl;
            break;
        }
        
    } while (ex == false);
    
    return 0;
}