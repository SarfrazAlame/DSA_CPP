#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int num = n; num != 0; num /= 10)
    {
        sum += num % 10;
    }
    cout << sum;
    return 0;
}