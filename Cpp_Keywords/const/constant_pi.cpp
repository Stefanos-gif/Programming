#include <iostream>
#include <cmath>
using namespace std;



int main(){
    const float Pi = 3.14;
    float r;

    cout << "Give me the radius of your circle:\t" ;
    cin >> r;
    
    float rsq = pow(r, 2);

    cout <<"--------\n\n" << endl;
    cout << "The circumfrance of this circle is:\t" << 2*Pi*r << endl;
    cout << "The Area of this circle is:\t" << Pi*rsq << endl;




    return 0;
}