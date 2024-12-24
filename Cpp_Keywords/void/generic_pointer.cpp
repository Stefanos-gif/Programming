#include <iostream> 
using namespace std;

int main(){
    float y = 3.14;
    int x = 32;
    char a = 'a';
    void* ptr4 = &a;
    char* charptr = static_cast<char*>(ptr4);
    void* ptr3 = &x;
    int* intptr = static_cast<int*>(ptr3);
    void* ptr2 = &y;
    float* floatPtr = static_cast<float*>(ptr2);
    cout << *floatPtr << endl;
    cout << *charptr << endl;
    cout << *intptr << endl;


    return 0;
}