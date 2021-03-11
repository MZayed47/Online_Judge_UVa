/* Gift From The Gods */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        long long temp=n,rev=0,rem;
        while(temp!=0){
            rem = temp%10;
            rev = rev*10 + rem;
            temp = temp/10;
        }
        if(rev==n){
            long long i,x;
            x = sqrt(n);
            for(i=2; i<=x; i++){
                if(n%i==0){
                    break;
                }
            }
            if(i==x+1){
                cout<<n*2<<endl;
                break;
            }
        }
        cout<<n*2<<endl;
    }
    return 0;
}
