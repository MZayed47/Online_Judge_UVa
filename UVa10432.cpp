/* Polygon Inside A Circle */

#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    double r,s;
    while(cin>>r>>s){
        printf("%.3lf\n",r*r*s*sin((2*PI)/s)/2);
    }
    return 0;
}
