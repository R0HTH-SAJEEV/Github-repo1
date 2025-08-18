#include <iostream>
using namespace std;

double num1, num2;
int main()
{
    cout << "Enter 2 numbers: ";
    cin >> num1;   //inputs the first number
    
    cout << "Enter another number: ";
    cin >> num2;   //inputs the second number
    
    if (num1 > num2)   //condition for checking if first number is greater than second
    {
        cout << num1 << " is greater than " << num2;   //displays only if first number is greater
    }

    else    //else (works only if the "if statement" is not satisfied)
    {
        cout << num2 << " is greater than " << num1;   //displays pnly if second number is greater
    }

    return 0;   //indicates successful program termination
}
