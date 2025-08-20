#include <iostream>
using namespace std;

main()
{
    int a, b, c, d;

    cout << system("cls");

    do
    {
        cout << "Enter 1 for +  2 for - 3 for * 4 for / 5 for %" << " 0 for exit : ";
        cin >> a;
        if (a == 0)
            break;
        cout << "Enter value of A : ";
        cin >> b;

        cout << "Enter value of B : ";
        cin >> c;
        switch (a)
        {
        case 1:
            system("cls");
            d = b + c;
            cout << "The addition of a and b = " << d << endl;
            break;
        case 2:
            system("cls");
            d = b - c;
            cout << "The subtraction of a and b = " << d << endl;
            break;
        case 3:
            system("cls");
            d = b * c;
            cout << "The multiplication of a and b = " << d << endl;
            break;
        case 4:
            system("cls");
            d = b / c;
            cout << "The division of a and b = " << d << endl;
            break;
        case 5:
            system("cls");
            d = b % c;
            cout << "The addition of a and b = " << d << endl;
            break;

        default:
            cout << "Invalid choice";
            break;
        }
    } while (a != 0);
}