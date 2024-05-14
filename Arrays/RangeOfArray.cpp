#include <iostream>
using namespace std;

int main()
{
    float marks[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    float copyMarks[5];
    for (int i = 0; i < 5; i++)
    {
        copyMarks[i] = marks[i];
    }

    return 0;
}