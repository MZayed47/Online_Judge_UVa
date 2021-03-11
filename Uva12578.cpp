#include<iostream>
#include<stdio.h>
#include<math.h>
#define Pi acos(-1)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double l,r,w,ar,ag;
        cin>>l;

        r = l/5;
        w = (l*6)/10;

        ar = Pi*r*r;
        ag = (l*w) - ar;

        printf("%.2lf %.2lf\n",ar,ag);
    }
    return 0;
}
