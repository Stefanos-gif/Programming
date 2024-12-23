#include <iostream>

using namespace std;

int main(){

    int array[15] = {-10,-20,1,2,3,4,5,6,7,8,9,-1, -90, -6, -69};
    int count = sizeof(array)/4;
    int sear = 9;

    for (int i = 0; i < count; i++)
    {

        if (array[i] == sear)
        {
            cout << "Found the number at place: " << i+1 << endl; 
            
        }
        if (array[i] * -1 >= 1)
        {
            cout << "Skipped place " << i+1 << " wich is number: " << array[i] << endl;
            
        }
        
    }
    
    return 0;
}