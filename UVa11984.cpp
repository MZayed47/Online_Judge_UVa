/* A change in thermal unit */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    double f,a,c,d;
    for(int i=1; i<=t; i++){
            cin>>c>>d;
            f = 9*c/5+d;
            a = f*5/9;
            printf("Case %d: %.2lf\n",i,a);
    }
    return 0;
}
