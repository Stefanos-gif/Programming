#include <iostream>

using namespace std;

void arraydisplay(int a[], int size){
    static int sumarray;
    static int count = 0;
    if (count == 0)
    {
        for (int i = 0; i < size; i++)
        {
            sumarray += a[i];
        }
    }
    cout <<"Array sum: " << sumarray << endl;
    cout <<"Function run count:\t" << count << endl;
    
    count++;
    

}

int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int siz = sizeof(array)/sizeof(array[0]);
    arraydisplay(array, siz);
    arraydisplay(array, siz);
    arraydisplay(array, siz);
    array[5] = {4};
    arraydisplay(array, siz);//as you see it stays the same;


    return 0;
}