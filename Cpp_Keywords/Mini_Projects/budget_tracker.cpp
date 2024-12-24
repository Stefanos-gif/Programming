#include <iostream>

using namespace std;

const float MaximumBudget = 1000.0;
static float TotalBudget = 0.0;

void addexpense(float expense){
    if(TotalBudget + expense > MaximumBudget){
        cout << "The expense you're trying to make is too expensive." << endl;
        
    }
    else
    {
    TotalBudget += expense;
    cout <<"Succesful purchase."<< endl;
    }
    
}

void viewBudget(){
    
    cout << "Your total expenses are:\t" << TotalBudget << endl;
}
void viewCurBalance(){
    cout << "Current balance in your account: " << MaximumBudget - TotalBudget << endl;
}

int main(){

    
    while (true)
    {
        int choice;
        float expense;
        cout << "-------\tWelcome to your expense calculator\t-------" << endl;
        cout << "1) Add expense. "<<endl;
        cout << "2) View expenses. "<<endl;
        cout << "3) View Current balance. "<<endl;
        cout << "4) Exit. "<<endl;
        cout << "What do you choose:___ ";
        cin >> choice ;

        switch (choice)
        {
            case 1:
                cout << "How much will you spent:\t" ;
                cin >> expense;

                addexpense(expense);
                break;
            
            case 2:
                viewBudget();
                break;
            
            case 3:
                viewCurBalance();
                break;

            case 4:
                cout << "\n\nSee you next time!\n" << endl;
                return 0;
                break;
        }    
    }
    
    


    return 0;
}