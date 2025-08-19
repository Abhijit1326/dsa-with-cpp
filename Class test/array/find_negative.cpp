#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size = ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements : ";
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i]<<" ";
        }
    }
}