
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int size = 3;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 2; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}