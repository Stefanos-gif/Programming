#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;
    
    if (ptr == nullptr)
    {
        cout << "ptr is null" << endl;
    }
    else
    {
        cout << "ptr is not null";
    }
    int x = 5;
    ptr = &x;
    if (ptr == nullptr)
    {
        cout << "ptr is null" << endl;
    }
    else
    {
        cout << "ptr is not null";
    }
    cout  << "\n" << ptr << "\t" << *ptr << endl;
    //as we see we managed to transform the pointer from a nullpointer to a normal one
    

    return 0;
}
