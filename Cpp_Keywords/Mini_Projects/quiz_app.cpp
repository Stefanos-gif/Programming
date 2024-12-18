#include <iostream>

using namespace std;

int main(){

    int score = 0;
    char choice;
    bool ans;
    float qus;

    cout << "Welcome to stef's mini test"<<endl;
    cout<< "Hope you pass!!!" << endl;


    cout << "If a ton of feathers and a ton of bricks were weighed, which would be heavier?\n(a = one of the two)\n(b = same weight): ";
    cin >> choice;

    if (choice == 'a') {
        score = score;
    }
    else if (choice == 'b'){
        score =score +33;
    }

    cout << "Is the great pyramid a pyramid scheme (1=true)(0=false)";
    cin >> ans;

    if (ans == 1){
        score = score ;
    }
    else if (ans == 0){
        score = score+33;
    }

    cout << "Whats 726 devided by 22";
    cin >> qus;

    if (qus == 726.0 / 22) {
        score = score +34;
    }
    else{
        score = score;
    }

    cout << "Your score is: " << score << "/100" << endl;

    if (score>50){
        cout << "You passed!!!" <<endl;
    }
    else {
        cout << "Nice try but you failed" << endl;
    }

    return 0;
}