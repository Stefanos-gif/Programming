#include <iostream>

using namespace std;

int main(){

    int ar[] = {10,20,30,40};
    int* ptr = ar;
    
    for (int i = 0; i < 4; i++)
    {
        cout << *ptr<<"\t";
        ptr++;
    }
    


    return 0;
}