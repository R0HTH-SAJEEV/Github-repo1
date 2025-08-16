#include <iostream>
using namespace std;

double celsius;
double fahrenheit;
int main()
{
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;    // inputs the temperature in celsius 

    fahrenheit = (celsius * 1.8) +32;    // converts celsius to fahrenheit

    cout << "The temperature in Fahrenheit is " << fahrenheit;    // displays the temperate in fahrenheit
    
    return 0;

}
