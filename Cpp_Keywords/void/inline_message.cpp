#include<iostream>

using namespace std;

inline void customMessage(const string& message){
    cout << message << endl;
}
int main(){
    customMessage("Hello vro <3");
    customMessage("Wasup");

    return 0;
}