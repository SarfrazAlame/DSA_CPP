#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int count = 0;

    for (int num = n; num != 0; num /= 10)
    {
        count++;
    }
    cout << count;
    return 0;
}