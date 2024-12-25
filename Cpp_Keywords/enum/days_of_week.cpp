#include <iostream>
using namespace std;

enum days {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main(){
    char da;
    cout << "Give me a day of the week:\nm)Monday\nt)Tuesday\nw)Wednesday\nT)Thursday\nf)Friday\ns)Saturday\nS)Sunday\n\tChoice__ ";

    cin >> da;
    int choice;
    switch (da)
    {
    case 'm':
        choice = 0;
        break;
    case 't':
        choice = 1;
        break;
    case 'w':
        choice = 2;
        break;
    case 'T':
        choice = 3;
        break;
    case 'f':
        choice = 4;
        break;
    case 's':
        choice = 5;
        break;
    case 'S':
        choice = 6;
        break;
    }

    if (choice < Saturday)
    {
        cout << "The day you chose is a weekday";
        
    }
    else if(choice>=Saturday)
    {
       cout << "You chose a day in the weekend";
    }
    

    return 0;
}