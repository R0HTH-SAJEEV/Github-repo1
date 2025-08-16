#include <iostream>
using namespace std;

double length;
double breadth;
double area;
int main()

{
    cout << "Enter Length of the rectangle in cm: ";
    cin >> length ;

    cout << "Enter breadth of the rectangle in cm: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of the rectangle is " << area << " cm^2";



    return 0; 
}