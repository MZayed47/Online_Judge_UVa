/* Simple Emirp */
#include<bits/stdc++.h>
using namespace std;

int main()
{
repeat:
    long long n;
    while(cin>>n){
        long long i;
        long long x = sqrt(n);
        for(i=2; i<=x; i++){
            if(n%i==0){
                cout<<n<<" is not prime."<<endl;
                goto repeat;
            }
        }
        if(i==x+1){
            int temp=n,rev=0,rem;
            while(temp!=0){
                rem = temp%10;
                rev = rev*10 + rem;
                temp = temp/10;
            }
            if(rev==n){
                cout<<n<<" is prime."<<endl;
                goto repeat;
            }
            //cout<<rev<<endl;
            long long j;
            long long y = sqrt(rev);
            for(j=2; j<=y; j++){
                if(rev%j==0){
                    cout<<n<<" is prime."<<endl;
                    goto repeat;
                }
            }
            if(j==y+1){
                cout<<n<<" is emirp."<<endl;
            }
        }
    }
    return 0;
}
