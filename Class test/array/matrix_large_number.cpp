#include<iostream>
using namespace std;

main()
{
    int row , col;
    cout<<"Enter the row : ";
    cin>>row;
    cout<<"Enter the column : ";
    cin>>col;
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter elements of the matrix : ";
            cin >> a[i][j];
        }
        
    }

    int large = a[0][0];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] > large) {
                large = a[i][j];
            }
        }
    }

    cout << "The largest element is: " << large << endl;
    
}