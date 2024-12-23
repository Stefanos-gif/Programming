#include <iostream>

using namespace std;

int main(){

    for (int i = 0; i < 10; i++)
    {
        if (i %2 != 0)
        {
            cout << " num \t" << i << endl;
            continue;
        }
        cout << "Skipped!\t\n";
        
        /* code */
    }
    


    return 0;
}