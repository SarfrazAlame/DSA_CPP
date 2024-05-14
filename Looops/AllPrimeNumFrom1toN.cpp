#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 0)
        return false;
    int factorCount = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            factorCount++;
    }
    if (factorCount == 2)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i<<" ";
        }
    }
    return 0;
}