#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int num = 1; num <= n; num++)
    {
        int num_copy = num;
        int sum = 0;
        for (; num_copy > 0; num_copy /= 10)
        {
            sum += num_copy % 10;
        }
        cout << sum<<" " ;
    }
    return 0;
}