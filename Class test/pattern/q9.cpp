#include <iostream>
using namespace std;

main()
{
    int i, s;
    char j;

    for (i = 6; i >= 1; i--)
    {

        for (int s = 1; s < i; s++)
        {
            cout << "  ";
        }

        for (j = i; j <= 6; j++)
        {
            cout << "*" << " ";
        }

        for (j = 5; j >= i; j--)
        {

            cout << "*" << " ";
        }

        cout << endl;
    }

    for (i = 1; i <= 5; i++)
    {

        for (int s = 1; s < i; s++)
        {
            cout << "  ";
        }

        for (j = i; j <= 5; j++)
        {
            cout << "*"<<" ";
        }
        for (j = 4; j >= i; j--)
        {
            cout << "*"<<" ";
        }

        cout << endl;
    }
}
