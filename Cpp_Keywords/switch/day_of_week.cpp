#include <iostream>

using namespace std;



int main(){

    int day;

    string dayy[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

    cout << "Choose a number from 1-7 i'll give you the day of the week: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "The  day is " << dayy[0] << endl;
        break;
    case 2:
        cout << "The  day is " << dayy[1] << endl;
        break;
    case 3:
        cout << "The  day is " << dayy[2] << endl;
        break;
    case 4:
        cout << "The day is " << dayy[3] << endl;
        break;
    case 5:
        cout << "The  day is " << dayy[4] << endl;
        break;
    case 6:
        cout << "The  day is " << dayy[5] << endl;
        break;
    case 7:
        cout << "The day is " << dayy[6] << endl;
        break;
    
    
    }



    return 0;
}