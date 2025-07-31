//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

main()
{
    int i, j, s;

    for (i = 5; i >= 1; i--)
    {

        // Print leading spaces
        for (int s = 1; s < i; s++)
        {
            cout << "  ";
        }
        // Ascending part: i to 5
        for (j = i; j <= 5; j++)
        {
            cout << j << " ";
        }

        // Descending part: from 4 down to i
        for (j = 4; j >= i; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
