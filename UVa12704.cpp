#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double x,y,r,d;
        cin>>x>>y>>r;
        d = sqrt((x*x)+(y*y));
        printf("%.2lf %.2lf\n",r-d,r+d);
    }
    return 0;
}
