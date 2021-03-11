/* Colorful Flowers */

#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main(){
    double a,b,c;
    double s,tri,R,r,sun,vio,rose;

    while(cin>>a>>b>>c){
        s = 0.5 * (a+b+c);
        tri = sqrt(s*(s-a)*(s-b)*(s-c));

        R = (a*b*c)/(4*tri);
        r = tri/s;

        sun = PI*R*R - tri;
        rose = PI*r*r;
        vio = tri - rose;

        printf("%.4f %.4f %.4f\n",sun,vio,rose);
    }
}
