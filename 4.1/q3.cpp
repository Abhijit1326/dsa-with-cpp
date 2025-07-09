#include <iostream>
using namespace std;

main()
{
    int x;
    cout << "Enter the value of X";
    cin >> x;

    int y;
    cout << "Enter the value of Y";
    cin >> y;

    cout << "This is the answer = " << x * x + 2 * x * y + y * y;
}