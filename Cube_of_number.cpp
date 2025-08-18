#include <iostream>
using namespace std;

int num, cube;
int main()
{
    cout << "Enter a number: ";
    cin >> num;

    cube = num * num * num;

    cout << "Cube of the number " << num << " is " << cube; 
    
    return 0;
}