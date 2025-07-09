#include <iostream>
using namespace std;

main()
{

    int a;
    cout << "Enter the value : ";
    cin >> a;
    if (0 > a)
    {
        cout << a << " this number is negative";
    }
    else
    {
        cout << a << " this number is positive";
    }
}