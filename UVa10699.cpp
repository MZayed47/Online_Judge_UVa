/* Count the factors */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        if(n==0){
            break;
        }
        int count=0;
        for(long long i=2; i<=n; i++){
            if(n%i==0){
                long long j,x = sqrt(i);
                for(j=2; j<=x; j++){
                    if(i%j==0){
                        break;
                    }
                }
                if(j==x+1){
                    count++;
                }
            }
        }
        cout<<n<<" : "<<count<<endl;
    }
    return 0;
}
