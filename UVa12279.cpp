/* Emoogle Balance */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,count=0;
    while(cin>>n){
        count++;
        if(n==0){
            break;
        }

        long long a[n],i,j,c=0;

        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(j=0; j<n; j++){
            if(a[j]==0){
                c++;
            }
        }
        cout<<"Case "<<count<<": "<<n-c-c<<endl;
    }
    return 0;
}
