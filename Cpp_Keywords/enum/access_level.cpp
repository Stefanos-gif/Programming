#include <iostream>

using namespace std;

enum accessLevel {ADMIN = 1, EDITOR = 2, VIEWER = 3};

int main(){

    int choice;
    cout << "This is a representation of the access permision of what each person has:\n";
    cout << "1. Admin\n2. Editor\n3. Viewer" <<endl;
    cout << "\tchoice:_ ";
    cin >> choice;

    switch (choice)
    {
    case ADMIN:
        cout << "---------List of admin access---------\nSigma privilages\nExecution Privilage\n Delete\n\n" << endl;
        break;
    case EDITOR:
        cout << "---------List of editor access---------\nAlpha privilages\nRacist Privilage\n Delete maybe\n\n" << endl;
        break;
    case VIEWER:
        cout << "---------List of viewer access---------\nSlave...\n\n" << endl;
        break;
    }



    return 0;
} 