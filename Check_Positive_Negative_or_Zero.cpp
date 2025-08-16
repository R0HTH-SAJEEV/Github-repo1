#include <iostream>
using namespace std;

int num;
int main()
{
    cout << "Enter a number: ";
    cin >> num;   // inputs the number

    if(num > 0)     // condition for checking if number is positive     
    {
        cout << num << " is Positive";   // displays if number is positive
    }

    else if(num < 0)    //  
    {
        cout << num << " is Negative";   // displays if number is negative
    }
    
    else
    {
        cout << "The number is Zero";   // displays if number is zero
    }

    return 0;   // indicates successful program termination
}
