#include <iostream>
#include <limits>

using namespace std;

typedef struct 
{
    string title;
    string author;
    int year;
}Book;

void Bookinput(Book& a){
    cout << "Whats the book's Title?\n\t_____";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, a.title);
    cout << "Who's the book's Author?\n\t_____";
    getline(cin, a.author);
    cout << "When was the book published?\n\t_____";
    cin >> a.year;
}

void Bookoutput(Book& a){
    cout << "The Author " << a.author << " published the book <" << a.title << "> in the year " << a.year << "." << endl;
}


int main(){
    char choice;
    cout << "-------This is a storage of books-------\nWant to enter a book int this storage:\n(y)(n): ";
    cin >> choice;
    
    if (choice == 'y')
    {
        Book viewbook;
        Bookinput(viewbook);
        Bookoutput(viewbook);
    }
    else if (choice == 'n')
    {
        cout << "see you next time!" << endl;
        return 0;
    }
    

    return 0;
}