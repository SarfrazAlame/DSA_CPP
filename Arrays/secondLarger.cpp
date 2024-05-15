#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int larget_element = INT_MIN, second_largest_element = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > larget_element)
        {
            second_largest_element = larget_element;
            larget_element = arr[i];
        }
        else if (arr[i] > second_largest_element && arr[i] != larget_element)
        {
            larget_element = arr[i];
        }
    }
    cout << larget_element << " " << second_largest_element << " ";
    return 0;
}