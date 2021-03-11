#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        count++;
        int a,n,x;
        cin>>a;
        n = a;
repeat:
        int temp=0;
        while(n!=0){
            x = n%10;
            n = n/10;
            temp = temp + x*x;
        }
        if(temp==1){
            cout<<"Case #"<<count<<": "<<a<<" is a Happy number."<<endl;
        }
        else if(temp<=9){
            cout<<"Case #"<<count<<": "<<a<<" is an Unhappy number."<<endl;
        }
        else if(temp>9){
            n = temp;
            goto repeat;
        }
    }
    return 0;
}
