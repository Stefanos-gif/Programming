#include <iostream>
using namespace std;
void arrayShowcaser(int a[],int size){
    cout << "Elements of the array: " << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << " place is: "<< a[i]<< endl;
    }
    
}
int main(){
    int num[5] = {1,2,3,4,5};
    int size = sizeof(num) / sizeof(num[0]);
    arrayShowcaser(num, size);

    return 0;
}