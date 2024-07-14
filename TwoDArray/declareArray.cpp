#include <iostream>
using namespace std;

// int main(){
//     int arr[5][6];
//     cout<<sizeof(arr);
//     return 0;
// }

int main()
{
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {2, 54, 6, 3, 6},
        {4, 3, 5, 7, 8},
        {8, 5, 9, 0, 5},
    };

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}