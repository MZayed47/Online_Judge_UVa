#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        if(n<0){
            break;
        }
        long long x;
        if(n==1){
            cout<<"0%"<<endl;
        }
        else{
        x = 25*n;
        cout<<x<<"%"<<endl;
        }
    }
    return 0;
}
