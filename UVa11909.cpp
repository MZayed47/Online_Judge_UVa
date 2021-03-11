/* Soya Milk */

#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

int main()
{
    double l,w,h,d,x,y,z,red,s,a,v;
    while(cin>>l>>w>>h>>d){
        red = PI/180.0;

        x = l;
        y = l/cos(d*red);
        z = l*tan(d*red);

        if(z>h){
            a = 0.5*h*h/tan(d*red);
            v = a*w;
            printf("%.3lf mL\n",v);
        }
        else{
            s = (x+y+z)/2;
            a = sqrt(s*(s-x)*(s-y)*(s-z));
            v = a * w;
            printf("%.3lf mL\n",(l*w*h)-v);
        }
    }
    return 0;
}
