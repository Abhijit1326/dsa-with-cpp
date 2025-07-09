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

    cout << "This is the answer = " << x * x * x - 3 * x * x * y + 3 * x * y * y - y * y * y;
}