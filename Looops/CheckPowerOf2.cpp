#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    while (num != 0)
    {
        if (num % 2 == 1)
            return false;
    }
    return true;

    return 0;
}