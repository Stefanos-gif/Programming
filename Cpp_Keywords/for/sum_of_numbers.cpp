#include <iostream>



using namespace std;

int main(){
    int num = 0;
    cout << "Num before loop: " << num << endl;

    for (int i = 1; i < 101; i++)
    {
        num += i;
    }
    cout << "Num: "<<num;
    



    return 0;
}