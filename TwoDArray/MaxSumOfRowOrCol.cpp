#include <iostream>
using namespace std;

int main()
{
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {2, 54, 6, 3, 6},
        {4, 3, 5, 7, 8},
        {8, 5, 9, 0, 5},
    };

    int col[5] = {0};
    int row[4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            col[j] += arr[i][j];
            row[i] += arr[i][j];
        }
    }

    // for (int k = 0; k < 5; k++)
    // {
    //     cout << col[k] << " ";
    // }
    // cout << endl;
    // for (int y = 0; y < 4; y++)
    // {
    //     cout << row[y] << " ";
    // }
    return 0;
}
