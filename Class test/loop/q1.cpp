#include<iostream>
using namespace std;

main()
{
    int a = 1;
    int b = 1;
    int c;
    for(c = 1; c <= 7; c++)
    {
        cout << a << "\t";
        a = a + b;
        b++;
    }
}