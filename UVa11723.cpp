/* Numbering Roads */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,n,count=0;
    while(cin>>r>>n){
        count++;
        if(r==0 && n==0){
            break;
        }
        int x = (r-1)/n;

        if(x<=26){
            cout<<"Case "<<count<<": "<<x<<endl;
        }
        else{
            cout<<"Case "<<count<<": impossible"<<endl;
        }
    }
    return 0;
}
