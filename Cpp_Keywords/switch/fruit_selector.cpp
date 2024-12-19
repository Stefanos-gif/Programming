#include<iostream>

using namespace std;

int main(){

    int choice;
    string fruit[5] = {"Apple", "Pear", "Banana", "Pinapple", "Mango"};

    cout  << "-----Welcome to stefs fruitshop-----" << endl;
    cout << "Choose a fruit from todays list to get: " << endl;
    cout << "1 = Apple," << endl;
    cout << "2 = Pear," << endl;
    cout << "3 = Banana," << endl;
    cout << "4 = Pinapple," << endl;
    cout << "5 = Mango:_____";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Youve bought a " << fruit[0] << endl;
        break;
    case 2:
        cout << "Youve bought a " << fruit[1] << endl;
        break;
    case 3:
        cout << "Youve bought a " << fruit[2] << endl;
        break;
    case 4:
        cout << "Youve bought a " << fruit[3] << endl;
        break;
    case 5:
        cout << "Youve bought a " << fruit[4] << endl;
        break;
    
    }
    



    return 0;
}