#include <iostream>

using namespace std;

int main(){

    bool cho;
    string ans;
    while(true){
        cout << "Is stef the best? (yes) (no)\t";
        cin >> ans;

        if (ans == "yes")
        {
            cout << "\t CORRECTTTTTTT" << endl;
            cho = true;
        }
        if (cho == true){
            break;
        }
        
    }


    return 0;
}