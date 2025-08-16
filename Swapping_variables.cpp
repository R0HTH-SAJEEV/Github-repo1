#include <iostream>
using namespace std;

int a;
int b;
int temp;   //for storing value temporarily
int main()
{
    cout << "Enter first number: ";
    cin >> a;   //inputs the first number

    cout << "Enter second number: ";
    cin >> b;   //inputs the second number

    temp = a;   //stores the value of a in temp
    a = b;      //assigns the value of b to a
    b = temp;   //assigns the value of temp to b

    cout << "After swapping, first number = " << a << " and second number = " << b;   //displays the result

    return 0;
}
