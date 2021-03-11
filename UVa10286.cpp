/* Trouble with a pentagon */

#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    double a;
    while(cin>>a){
        double b = a * (sin(72*(PI/180))/sin(63*(PI/180)));
        //double b = a * (sin(72)/sin(63));
        printf("%.10lf\n",b);
    }
    return 0;
}
