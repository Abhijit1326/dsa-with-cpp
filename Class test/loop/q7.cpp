#include <iostream>
using namespace std;

main() 
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int last = n % 10;
    int first = n;

    while (first >= 10)
        first = first / 10;

    cout << "The Sum of the first and last digit is :" << (first + last);
}