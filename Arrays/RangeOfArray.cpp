#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 45, 56, 23, 56, 87, 56, 34, 45, 32};
    int max_element = arr[0];
    int min_element = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (max_element < arr[i])
        {
            max_element = arr[i];
        }
        if (min_element > arr[i])
        {
            min_element = arr[i];
        }
    }

    cout << max_element << endl;
    cout << min_element;
    return 0;
}