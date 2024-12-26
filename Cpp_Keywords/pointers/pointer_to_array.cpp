#include <iostream>

using namespace std;

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *aptr = array;
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        cout << *aptr << " " ;
        aptr++;
    }
    


    return 0;
}