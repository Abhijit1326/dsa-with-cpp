#include <iostream>
using namespace std;

main()
{
    
    int a;
    int b;
    int c;

    cout << "Enter the value of A = ";
    cin >> a;
    cout << "Enter the value of B = ";
    cin >> b;

    cout << "Before Swapping" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl << endl;
    

    //swap two variables using the third variable method.
    c = a;
    a = b;
    b = c;
    cout << "After Swapping" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b;
}