#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
repeat:
    while(t--){
        double d,v,u,t1,t2;
        count++;
        cin>>d>>v>>u;

        if(v>=u || u==0 || v==0){
            cout<<"Case "<<count<<": can't determine"<<endl;
            goto repeat;
        }

        t1 = d/u;
        t2 = d/sqrt(u*u-v*v);

        printf("Case %d: %.3lf\n",count,abs(t2-t1));
    }
    return 0;
}
