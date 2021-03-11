/* Combinations */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    while(cin>>n>>k){
        if(n==0 && k==0){
            break;
        }
        long long a = k;
        if(k>n/2){
            k = n-k;
        }

        long long x=1;

        for(int i=0; i<k; i++){
            x = x * (n-i);
            x = x / (i+1);
        }
        cout<<n<<" things taken "<<a<<" at a time is "<<x<<" exactly."<<endl;
    }
    return 0;
}
