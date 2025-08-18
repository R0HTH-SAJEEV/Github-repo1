#include <iostream>
using namespace std;

int num, square;
int main()
{
    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    cout << "Square of the number " << num << " is " << square; 
    
    return 0;
}