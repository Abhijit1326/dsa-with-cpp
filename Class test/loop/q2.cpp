#include<iostream>
using namespace std;

main()
{
    int n, sum, rem = 0, a;
    cout <<" Enter any number :";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        sum = rem + (rem * rem * rem);
        n/= 10;
    }
    if (n == a)
    {
        cout << " is a Disarium Number";
    }
    else{
        cout << " is not a Disarium Number";
    }
}