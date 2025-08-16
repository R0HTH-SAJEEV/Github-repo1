#include <iostream>
using namespace std;

//variables for storing values
int num1;  
int num2;
int sum;    
int main()
{
    cout <<"Enter first number: ";
    cin >> num1;   // input first number

    cout <<"Enter second number: ";
    cin >> num2;   // input second number

    sum = num1 + num2 ;   // calculating sum
    cout << num1 << " + "<< num2 << " = " << sum ;   // displaying output

return 0;   // indicate successful program termination

}
