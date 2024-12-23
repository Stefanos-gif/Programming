#include <iostream>


using namespace std;

int main(){

    int array[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(array)/4;

    for (int i = 0; i < size; i++)
    {   
        if (array[i] % 3 == 0)
        {
            cout << "Skipped!" << endl;
            continue;
            
        }
        cout << "Num: " << array[i] << endl;
        
        
    }
    
    


    return 0;
}