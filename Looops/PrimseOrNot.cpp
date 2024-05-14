#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int factorCount = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            factorCount++;
        }
    }
    if(factorCount!=0){
        cout<<"Not Prime";
    }else{
        cout<<"Prime";
    }

    return 0;
}