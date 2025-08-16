#include <iostream>
using namespace std;

int num;
int main()
{
    cout << "Enter a number: ";
    cin >> num;   //inputs the number

    if(num % 2 == 0)   //condition for checking if remainder is 0
    {
        cout << num << " is an Even number";   //displays if number is even
    }
    
    else   //condition for checking if remainder is not 0
    {
        cout << num << " is an Odd number";   //displays if number is odd
    }

    return 0;   //indicates successful program termination
}
