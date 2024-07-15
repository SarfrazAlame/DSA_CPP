#include <iostream>
using namespace std;

int main()
{
    int A[6][4] = {
        {1, 2, 3, 4},
        {7, 4, 87, 9},
        {2, 7, 4, 7},
        {9, 4, 3, 5},
        {1, 5, 2, 7},
        {6, 8, 4, 9},
    };

    int B[4][4] = {
        {10, 2, 56, 7},
        {8, 12, 6, 9},
        {8, 34, 98, 3},
        {1, 7, 3, 7},
    };

    int C[6][4];

    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            int sum = 0;
            for (int j = 0; j < 4; j++)
            {
                sum += A[i][j] * B[j][k];
            }
            C[i][k] = sum;
            cout << C[i][k] << " ";
        }
        cout<<endl;
    }
    return 0;
}