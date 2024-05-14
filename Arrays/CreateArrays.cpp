#include <iostream>
using namespace std;

int main()
{

    int roll_number[200];

    // cout << sizeof(roll_number) << endl;

    for (int i = 0; i <= 4; i++)
    {
        cin >> roll_number[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << roll_number[i]<<" ";
    }
    return 0;
}