/* Alaska */

#include<bits/stdc++.h>
using namespace std;

int main()
{
repeat:
    int n;
    while(cin>>n){
        int a[n],i,j;
        if(n==0){
            break;
        }
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(j=1; j<n; j++){
            if(a[j]-a[j-1]>200){
                cout<<"IMPOSSIBLE"<<endl;
                goto repeat;
            }
        }
        if(1422-a[j-1]>100){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else{
            cout<<"POSSIBLE"<<endl;
        }
    }
}
