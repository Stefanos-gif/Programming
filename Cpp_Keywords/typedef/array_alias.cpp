#include <iostream>

using namespace std;

int main(){
    typedef int intar[10];
    intar nums = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << "\t" << nums[i] << endl;
    }
    


    return 0;
}