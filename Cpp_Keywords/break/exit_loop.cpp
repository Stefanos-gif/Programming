/*Write a program to loop through numbers from 1 to 10.
Exit the loop when the number 5 is reached and print a message.*/
#include <iostream>

using namespace std;

int main(){

    int i = 1;
    while (i<10)
    {
        cout << i << endl;
        
        if (i == 5){
            cout << "\tReached 5!\n";
            break;
        }
        i++;
    }
    


    return 0;
}