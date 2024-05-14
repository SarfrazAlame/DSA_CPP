
#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {2, 4, 6, 7, 5, 3, 5, 78, 8};
    int targetNum = 323;
    int flag = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == targetNum)
        {
            cout << "present" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "not fount";
    }
    return 0;
}