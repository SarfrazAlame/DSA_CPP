#include <iostream>
using namespace std;

int main()
{

    float marks[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    float sumOfRoll = 0;
    for (int i = 0; i < 5; i++)
    {
        marks[i] = marks[i] + marks[i] * 5 / 100;
        cout << marks[i] << " " << endl;
        sumOfRoll += marks[i];
    }

    cout << sumOfRoll / 5;
    return 0;
}