/* Soda Surpler */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int e,f,c;
        cin>>e>>f>>c;
        int n = e+f;
        int x=n,y,temp=0;
        while(x!=0){
            x = n/c;
            y = n%c;
            n = (x+y);
            temp = temp + x;
        }
        cout<<temp<<endl;
    }
    return 0;
}
