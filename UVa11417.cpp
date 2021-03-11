#include<iostream>
#include<stdio.h>
using namespace std;

int GCD(int m, int n)
{
    int gcd;
    for(int x=1; x<=m && x<=n; ++x){
        if(m%x==0 && n%x==0){
            gcd = x;
        }
    }
    return gcd;
}

int main()
{
    int n;

    while(scanf("%d",&n)){
        int g,i,j;
        if(n==0){
            break;
        }
        g=0;
        for(i=1; i<n;i++){
            for(j=i+1; j<=n; j++){
                g+=GCD(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
