/* Goldbach's Conjecture II */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        if(n==0){
            break;
        }
        long long i,j,k,count=0;
        for(i=2; i<=n/2; i++){
            long long x = sqrt(i);

            for(j=2; j<=x; j++){
                if(i%j==0){
                    break;
                }
            }
            if(j==x+1){
                long long y = sqrt(n-i);
                for(k=2; k<=y; k++){
                    if((n-i)%k==0){
                        break;
                    }
                }
                if(k==y+1){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

