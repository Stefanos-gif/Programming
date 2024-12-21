/*Ask the user to input a number between 1 and 10.
Use a do-while loop to keep asking until they provide a valid number.*/
#include <iostream>

using namespace std;

int main(){
    srand(time(0));
    int num ;
    int ans = rand() % 11;
    do
    {
        cout << "Guess a number between 1-10: ";
        cin >> num;

        if (num > ans){
            cout << "Go lower!\n";
        }
        else if(num < ans){
            cout << "Go higher\n";
        }
        if(num == ans){
            cout << "Correct! it was "<< ans << ". \n";
            break;
        }
    } while (num != ans);
    


    return 0;
}