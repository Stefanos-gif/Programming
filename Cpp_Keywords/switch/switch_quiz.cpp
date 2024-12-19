#include<iostream>

using namespace std;

int main(){

    string cas[4] = {"Wrong!!", "Correct", "Wrong!!", "Wrong"};
    char choice;

    cout << "-----Welcome to stef's quiz-------"<< endl;
    cout <<"What is stef's Economics teacher:" << endl;
    cout << "A) Good teacher"<< endl;
    cout << "B) Irresistable annoying piece of siedge"<< endl;
    cout << "C) Good haircut"<< endl;
    cout << "A) Good pencil case"<< endl;
    cout << "Answer________________________________";
    cin >> choice;

    switch (choice)
    {
    case 'A':
        cout << cas[0] << endl;
        break;
    case 'B':
        cout << cas[1] << endl;
        break;
    case 'C':
        cout << cas[2] << endl;
        break;
    case 'D':
        cout << cas[3] << endl;
        break;
    
    }



    return 0;
}