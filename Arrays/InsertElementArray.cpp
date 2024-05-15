#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 3; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    for (int i = n; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = num;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}