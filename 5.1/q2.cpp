#include <iostream>
using namespace std;

main()
{

    float a;

    cout << "Enter any number : ";
    cin >> a;

    if (0 > a)
    {
        cout << a << " is negative";
    }
    else if (a == 0)
    {
        cout << a << " is neutral";
    }
    else
    {
        cout << a << " is Positive";
    }
}