#include <iostream>

using namespace std;

int main(){

    int numar[10] = {1,65,23,563,4,7,87,2,9,10};
    int i = 0;
    while (i < 1000)
    {
        if (numar[i] == 87){
            cout << "Its stored in the " << i+1 << "th place of the array" << endl;\
            break;
        }
        i++;
    }
    

    return 0;
}