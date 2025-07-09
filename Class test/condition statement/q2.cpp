#include <iostream>
using namespace std;

main()
{
    int a;
    cout << "Enter the value : ";
    cin >> a;

    if (a % 2 == 0)
    {
        if (a % 5 == 0)
        {
            cout << a << " this number even and divided by 5";
        }

        else
        {
            cout << a << " this number even and not divided by 5";
        }
    }
    else
    {
        if (a % 5 == 0)
        {
            cout << a << " this number odd and divided by 5";
        }
        else
        {
            cout << a << " this number odd and not divided by 5";
        }
    }
}