#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    double x,y,z,u,a,t,v,s;
    while(cin>>n){
        if(n==0){
            break;
        }
        count++;
        if(n==1){
            cin>>x>>y>>z;
            u = x;
            v = y;
            t = z;
            a = (v - u) / t;
            s = u * t + .5*(a*t*t);
            printf("Case %d: %.3lf %.3lf\n",count,s,a);
        }
        if(n==2){
            cin>>x>>y>>z;
            u = x;
            v = y;
            a = z;
            t = (v - u) / a;
            s = u * t + .5*(a*t*t);
            printf("Case %d: %.3lf %.3lf\n",count,s,t);
        }
        if(n==3){
            cin>>x>>y>>z;
            u = x;
            a = y;
            s = z;
            v = sqrt(u*u + 2*a*s);
            t = (v - u) / a;
            printf("Case %d: %.3lf %.3lf\n",count,v,t);
        }
        if(n==4){
            cin>>x>>y>>z;
            double u,a,t,v,s;
            v = x;
            a = y;
            s = z;
            u = sqrt(v*v - 2*a*s);
            t = (v - u) / a;
            printf("Case %d: %.3lf %.3lf\n",count,u,t);
        }
    }
    return 0;
}
