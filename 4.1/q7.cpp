#include <iostream>
using namespace std;

main()
{
    int x;
    cout << "Enter the value of X = ";
    cin >> x;

    int y;
    cout << "Enter the value of Y = ";
    cin >> y;

    int z;
    cout << "Enter the value of Z = ";
    cin >> y;

    cout << "This is the answer = " << x * x + y * y + z * z + 2 * x * y + 2 * y * z + 2 * x * z;
}