#include <iostream>

using namespace std;

int main(){

    string array[10] ;
    
    for (int i = 0; i < 10; i++)
    
    
    {
        getline(cin, array[i]);
        
    
        if (array[i].empty())
        {
            array[i] = "x";
            cout << "x" << endl;
            continue;
            
        } 
        else
        {
        cout << i+1 << "st:\t" << array[i]<<endl;
        }
        
        
    }
    


    return 0;
}