#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sumOfDigit = 0;
        for (; num > 0; num = num / 10)
        {
            sumOfDigit += num % 10;
        }
        if (sumOfDigit == k)
            cout << i << endl;
    }
    return 0;
}
