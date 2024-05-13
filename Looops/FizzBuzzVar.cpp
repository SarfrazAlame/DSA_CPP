#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if ((i % 3) && (i % 5))
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            sum + sum + 1;
            cout << i << endl;
        }

        if (sum > 2 * n)
            break;
    }

    return 0;
}