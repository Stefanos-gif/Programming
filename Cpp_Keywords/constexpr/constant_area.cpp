#include<iostream>

using namespace std;

constexpr int area(int x, int y){
    return x*y;
}

int main(){

    constexpr int height = 5;
    constexpr int width = 19;
    cout << "\t\t" << area(height, width) << endl;


    return 0;
}