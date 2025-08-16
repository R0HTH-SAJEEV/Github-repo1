#include <iostream>
using namespace std;

double celsius;
double fahrenheit;
int main()
{
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) +32;

    cout << "The temperature in Fahrenheit is " << fahrenheit;
    
    return 0;
}