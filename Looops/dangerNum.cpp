#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1;; i++)
    {
        cout << i << " ";
        if (i == n)
        {
            break;
        }
    }
    return 0;
}