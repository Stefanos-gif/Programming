#include <iostream>
using namespace std;

void constr(const string& message){
    cout << message << endl;
}

int main(){
    string temo = "This is a temporary string";
    constr(temo);
    constr("Hello");

    return 0;
}