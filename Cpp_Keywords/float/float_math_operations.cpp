#include <iostream>

using namespace std;
void area(float r22, float pie2){
    cout <<  pie2*r22;
}

int main(){
    float pie = 3.14;
    float radius = radius*radius;
    

    cout << "Give me the radius of a circle so we find the area of it" ;
    cin >> radius;

    cout << "The area of your circle is: "  << endl;
    area(radius,pie);

    return 0;
}