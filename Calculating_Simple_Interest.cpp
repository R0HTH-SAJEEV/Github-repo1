#include <iostream>
using namespace std;

double SI;  //SI = Simple interest
double P;   //P = Principal amount
double R;   //R = Rate of interest
double T;   //T = Time in years
int main()
{
    cout << "Enter the principal amount: ";
    cin >> P;   //inputs principal amount

    cout <<"Enter the rate of interest(%): ";
    cin >> R;   //inputs interest rate

    cout <<"Enter the time (in years): ";
    cin >> T;   //inputs the time

    SI = (P * R * T)/100;    //calculating the simple interest

    cout << "Simple Interest = " << SI;

    return 0;
}