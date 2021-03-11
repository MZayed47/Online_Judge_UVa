/* The Knights of the Round Table */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,s,area,r;
    while(cin>>a>>b>>c){
        if(a==0 && b==0 && c==0){
            r = 0;
            printf("The radius of the round table is: %.3lf\n",r);
        }
        else{
            s = (a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            r = 2 * (area/(a+b+c));
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
