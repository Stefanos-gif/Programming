#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a; 
    *a = *b;       
    *b = temp;     

}


int main(){
    int x = 5;
    int y = 10;

    swap(&x,&y);
    cout << x << endl << y;

    return 0;
}
