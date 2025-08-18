#include <iostream>
using namespace std;

const double pi = 3.14 ;
double radius, Area;
int main()
{   
    cout << "Enter radius of the circle in cm: ";
    cin >> radius;

    Area = pi * radius * radius;

    cout << "The Area of the circle is " << Area << " cm^2";

    return 0;
}