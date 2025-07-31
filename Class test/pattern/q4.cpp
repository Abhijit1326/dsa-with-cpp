//  1 0 1 0 1
//    1 0 1 0
//      1 0 1
//        1 0
//          1

#include <iostream>
using namespace std;

main()
{
    int i, j, s;

    for (i = 1; i <= 5; i++)
    {
        
        for (int s = 1; s < i; s++)
        {
            cout << " ";
        }
        for (j = 5; j >= i; j--)
        {
            if (j % 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }

}
