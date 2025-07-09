#include <iostream>
using namespace std;

main()
{

    int a;
    int b;

    cout << "Enter the value of A = ";
    cin >> a;
    cout << "Enter the value of B = ";
    cin >> b;

    cout << "Before Swapping" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl
         << endl;

    // Swap two variables without using a third variable method.
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b;
}