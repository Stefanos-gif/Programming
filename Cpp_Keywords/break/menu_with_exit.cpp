#include <iostream>
using namespace std;
int main(){

    int choc;
    bool ex = false;

    while (true)
    {
        cout << "--------Stef's menu----------"<<endl;
        cout <<"1) Steak" << endl;
        cout <<"2) Pasta" << endl;
        cout <<"3) Exit" << endl;
        cout << "Choice:________ ";
        cin >> choc;

        if (choc == 1)
        {
            cout << "You've gotten a steak." << endl;
        }
        else if (choc == 2)
        {
            cout << "You've gotten a Pasta." << endl;
            
        }
        else if (choc == 3)
        {
            ex = true;
            
        }
        
        
        if (ex == true)
        {
            break; 
        }
        

    }
    


    return 0;
}