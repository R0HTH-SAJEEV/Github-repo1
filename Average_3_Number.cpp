#include <iostream>
using namespace std;

double num1,num2,num3;
double avg;
int main()
{
    cout << "Enter a number: ";
    cin >> num1;   //inputs the first number

    cout << "Enter second number: ";
    cin >> num2;   //inputs the second number

    cout << "Enter third number: ";
    cin >> num3;   //inputs the third number

    avg = (num1 + num2 + num3)/3;   //calculates the average
    cout << "Average = " << avg;   //displays the output

    return 0;   //indicates successful program termination
}
