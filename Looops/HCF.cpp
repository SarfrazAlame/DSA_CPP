#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int min_num;
    if(a>b){
        min_num = a;
    }else{
        min_num = b;
    }

    for(int i = min_num; i>=1; i--){
        if(a%i==0 && b%i==0){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}