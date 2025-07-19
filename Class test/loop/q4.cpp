#include<iostream>
using namespace std;

main()
{
    char a, b;
    cout << "Enter starting Character : ";
    cin >> a;
    cout << "Enter ending Character : ";
    cin >> b;

    do
    {
        cout << a << "\t";
        a++;
    } while (a <= b);
}