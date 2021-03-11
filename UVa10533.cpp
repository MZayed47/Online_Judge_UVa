/* Digit Primes */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--){
        long long a,b,n,count=0;
        scanf("%lld%lld",&a,&b);
        for(n=a; n<=b; n++){
            long long c1=0,i;
            for(i=2; i<=sqrt(n); i++){
                if(n%i==0){
                    c1++;
                    break;
                }
            }
            if(c1==0){
                long long temp=n,d,sum=0;
                while(temp!=0){
                    d = temp%10;
                    sum = sum + d;
                    temp = temp/10;
                }

                long long c2=0,j;
                for(j=2; j<=sqrt(sum); j++){
                    if(sum%j==0){
                        c2++;
                        break;
                    }
                }
                if(c2==0){
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
