#include <iostream>
using namespace std;

int main()
{

    int A[4][4] = {
        {1, 2, 3, 4},
        {7, 4, 87, 9},
        {2, 7, 4, 7},
        {9, 4, 3, 5},
    };

    for (int i = 0; i < 4; i++)
    {
        int x = i, y = 0;
        while (x >= 0 && y < 4)
        {
            cout << A[x][y] << " ";
            x--;
            y++;
        }
        cout << endl;
    }

    for (int j = 1; j < 4; j++)
    {
        int x = 3, y = j;
        while (x >= 0 && y < 4)
        {
            cout << A[x][y] << " ";
            x--;
            y++;
        }
        cout << endl;
    }

    return 0;
}