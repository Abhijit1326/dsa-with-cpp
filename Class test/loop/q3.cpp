#include<iostream>
using namespace std;

main()
{
    int n, rem, sum = 0;
    cout << "Enter any number: ";
    cin >> n;

    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    cout << "Final digit : " << sum;
    
}