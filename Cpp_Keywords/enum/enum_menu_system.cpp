#include<iostream>

using namespace std;

int main(){

    enum menuOP {VIEW = 1, ADD = 2, DELETE = 3, EXIT = 4};
    int choice;
    while (true)
    {
        cout << "\n--------Stef's menu--------" << endl;
        cout << VIEW << ". View" << endl;
        cout << ADD << ". Add" << endl;
        cout << DELETE << ". Delete" << endl;
        cout << EXIT << ". Exit" << endl;
        cout << "\tChoice: ";
        cin >> choice;

        switch (choice)
        {
        case VIEW:
            cout << "\n-You've viewed!-\n" << endl;
            break;
        case ADD:
            cout << "\n-You've added your choice!-\n" << endl;
            break;
        case DELETE:
            cout << "\n-You've deleted your choice!-\n" << endl;
            break;
        case EXIT:
            cout << "\n-Hope to see you again!!-\n\n" << endl;
            return 0;
            break;
        }

    }
    


    return 0;
}