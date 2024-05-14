#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = 0; k < n; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     int space = i;
    //     int starts = n;
    //     for (int j = 0; j < space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < starts; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < n; i++)
    {

        int stars = i * 2 + 1;
        int spaces = n - i - 1;
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        int stars = i * 2 + 1;
        int spaces = n - i - 1;
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}