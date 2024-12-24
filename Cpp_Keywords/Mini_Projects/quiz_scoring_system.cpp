/*Mini-Project 3: Quiz Scoring System
Objective:
Create a quiz scoring system that:

Uses if, switch, const, void, static.
Tracks the total score across multiple questions.*/
#include <iostream>
using namespace std;

const int maxscore = 100;
static int totalScore= 0;
static int count = 1;

void askQuestion(const string& question, const char correctAnswer){
    
    char UserAnswer;
    cout << count << ") Question is: \n" << question << ": " ;
    cin >> UserAnswer;
    if (UserAnswer == correctAnswer)
    {
        totalScore += 10;
        cout << "Correct!! Nce, \n" << endl; 
    }
    else
    {
        cout << "Wrong! " << endl;
    }
    count++;
}

void DisplayFinalScore(){
    if (maxscore+totalScore/2 >= 50)
    {
        cout << "You passed!!!\n\t With a score of: " << totalScore << endl;
        
    }
    else
    {
        cout << "You failed with a score of: " << totalScore << endl;
    }
    
    
}

int main(){
    char con;
    char correctan[10] = {'c','d','b','c','c','c','c','b','c','c'};
    
    cout << "Welcome to stefs test lets begin:\n (y)(n): ";
    cin >> con;
        if (con == 'y'){
        askQuestion("Whats the correct answer to 4x20:\n\ta)25\n\tb)74\n\tc)80\n\t\tAnswer", correctan[0]);
        askQuestion("Whats the correct answer to 100x20:\n\ta)235\n\tb)54\n\tc)820\n\td)2000\n\t\tAnswer", correctan[1]);
        askQuestion("Whats the correct answer to 2x35:\n\ta)125\n\tb)70\n\tc)963\n\t\tAnswer", correctan[2]);
        askQuestion("Whats the correct answer to 100x220:\n\ta)2005\n\tb)70004\n\tc)22000\n\t\tAnswer", correctan[3]);
        askQuestion("Whats the correct answer to 2x50:\n\ta)115\n\tb)24\n\tc)100\n\t\tAnswer", correctan[4]);
        askQuestion("Whats the correct answer to 8x280:\n\ta)225\n\tb)744\n\tc)2240\n\t\tAnswer", correctan[5]);
        askQuestion("Whats the correct answer to 5+2:\n\ta)23\n\tb)8\n\tc)7\n\t\tAnswer", correctan[6]);
        askQuestion("Whats the correct answer to 4-20:\n\ta)24\n\tb)-16\n\tc)-24\n\t\tAnswer", correctan[7]);
        askQuestion("Whats the correct answer to 8-150:\n\ta)14\n\tb)734\n\tc)-142\n\t\tAnswer", correctan[8]);
        askQuestion("Whats the correct answer to 4x220:\n\ta)2215\n\tb)7543\n\tc)880\n\t\tAnswer", correctan[9]);
    }
    else
    {
        return 0;
    }
    DisplayFinalScore();
    
    
    


    return 0;
}