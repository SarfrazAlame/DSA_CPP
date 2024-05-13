#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        else if ((i % 3==0) && (i % 5==0==0))
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3==0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5==0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
 
    }

    return 0;
}