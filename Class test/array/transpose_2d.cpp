#include <iostream>
using namespace std;

main()
{
    int row, col;
    cout << "Enter the row : ";
    cin >> row;
    cout << "Enter the column : ";
    cin >> col;
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter elements of the matrix : ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}