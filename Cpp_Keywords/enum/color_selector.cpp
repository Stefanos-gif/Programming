#include <iostream>

using namespace std;

enum Color { RED , GREEN, BLUE};

int main(){ 

    Color choice[3] = {RED, GREEN, BLUE};
    
    int choic;
    cout << "Select a colour by number:\n1)Red\n2)Green\n3)Blue\n\tChoose: ";
    cin >> choic;

    cout << "\n\nYou chose:\t";
    if (choice[choic-1] == 0)
    {
        cout << "Red" << endl;
    }
    else if (choice[choic-1] == 1)
    {
        cout << "Green" << endl;
    }
    else if (choice[choic-1] == 2)
    {
        cout << "Blue" << endl;
    }
    
    

    return 0;
}