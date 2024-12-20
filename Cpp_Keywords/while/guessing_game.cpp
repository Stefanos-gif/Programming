//Implement a number guessing game where the user must guess a randomly generated number (between 1 and 100) using a while loop.
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int randomNum = rand() % 101;
    bool cor = false;
    int num;
    
    while(cor == false){
        cout << "guess a number: ";
        cin >> num;
        if(num<randomNum){
            cout << "Higher"<<endl;
        }
        else if(num>randomNum){
            cout << "Lower"<<endl;
        }
        if (num == randomNum){
            cor = true;
            cout << "Correct!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }
        else{
            cor = false;
            cout << "Wrong!" << endl;
        }
    }




    return 0;
}