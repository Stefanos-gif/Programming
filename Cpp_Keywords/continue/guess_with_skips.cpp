#include <iostream>

using namespace std;

int main(){
    srand(time(0));
    int randomNum = rand() % 51;
    cout << "Welcome to guessing game\n" << endl;
    int num;
    while (true)
    {   
        cout << "Guess:\t" ;
        cin >> num ;
        if (num > 50)
        {
            
            continue;
            
        }
        else if (num == randomNum)
        {
            cout << "Correct!!"<<endl;
            break;

        }

        else if(num > randomNum && num < 50){
            cout << "Lower!"<<endl;
        }

        else if(num < randomNum && num < 50){
            cout << "Higher!"<<endl;
        }
        
        
        
    }
    
    


    return 0;
}