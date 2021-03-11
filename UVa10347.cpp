/* Medians */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,s,r,x,y,z;
    while(cin>>a>>b>>c){
        s = (a+b+c)/2;
        r = (double(4)/double(3))*sqrt(s*(s-a)*(s-b)*(s-c));
        if(r>0){
            printf("%.3lf\n",r);
        }
        else{
            r = -1;
            printf("%.3lf\n",r);
        }
    }
    return 0;
}
