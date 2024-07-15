#include <iostream>
using namespace std;

int main()
{

    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 3, 6},
        {4, 3, 5, 7, 8},
        {8, 5, 9, 0, 5},
        {4, 2, 7, 0, 3},
    };

    for (int i = 0; i < 5; i++)
    {
        int j = 5 - 1 - i;
        swap(arr[i][i], arr[i][j]);
    }

    for(int j=0;j<5;j++){
        for(int k=0;k<5;k++){
            cout<<arr[j][k];
        }
        cout<<endl;
    }
    return 0;
}