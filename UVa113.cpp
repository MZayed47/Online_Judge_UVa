#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    double n,p;
    while(cin>>n>>p){
        double k;
        k = pow(p,(1/n));
        printf("%.0lf\n",k);
    }
    return 0;
}
