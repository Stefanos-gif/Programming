#include <iostream>

using namespace std;

struct grading_system
{
    string A;
    string B;
    string C;
    string D;
    string E;
    string F;

   
};

int main(){

    grading_system syst {
        {"Woww excelent!"},
        {"Well done!"},
        {"Good job!"},
        {"Nice try"},
        {"Could be better"},
        {"Better luck next time!"}
    };

    char grade;

    cout << "What grave did you recieve?(A,B,C,D,E,F): ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << syst.A << endl;
        break;
    case 'B':
        cout << syst.B << endl;
        break;
    case 'C':
        cout << syst.C << endl;
        break;
    case 'D':
        cout << syst.D << endl;
        break;
    case 'E':
        cout << syst.E << endl;
        break;
    case 'F':
        cout << syst.F << endl;
        break;
    
    }
    
    
    
    
    
    return 0;
}