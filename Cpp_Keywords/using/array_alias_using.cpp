#include <iostream>

using namespace std;
using ant = int[10];

int main(){
    ant joe;
    int size = sizeof(joe)/sizeof(joe[0]);
    for (int i = 0; i < size; i++)
    {
        cin >>joe[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << i << ".  " << joe[i] << endl;
    }
    

    return 0;
}