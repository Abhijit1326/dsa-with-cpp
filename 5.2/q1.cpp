#include <iostream>
using namespace std;

main()
{
    int a, b, c;

    cout << "Enter the value of A : ";
    cin >> a;
    cout << "Enter the value of B : ";
    cin >> b;
    cout << "Enter the value of C : ";
    cin >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is minimum.....";
        }

        else
        {
            cout << c << " is minimum.....";
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << " is minimum.....";
        }
        else
        {
            cout << c << " is minimum.....";
        }
    }
}