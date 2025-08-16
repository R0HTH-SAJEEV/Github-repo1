#include <iostream>
using namespace std;

int num1;
int num2;
double Remainder;
int main()
{
    cout << "Enter first number: ";
    cin >> num1;   //inputs the first number

    cout << "Enter second number: ";
    cin >> num2;   //inputs the second number

    Remainder = num1 % num2;   //calculates the remainder

    cout << "Remainder = " << Remainder;   //displays the result

    return 0;   //indicates successful program termination
}
