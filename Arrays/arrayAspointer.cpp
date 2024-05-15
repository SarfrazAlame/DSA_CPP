#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    // cout <<*(arr+3);

    // int arr[5];
    // cin >> *arr;
    // cin >> *(arr + 1);
    // cin >> *(arr + 2);
    // cin >> *(arr + 3);
    // cin >> *(arr + 4);

    // cout<<*arr+2;

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> *(arr + i);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << *(arr + i) << " ";
    }

    return 0;
}