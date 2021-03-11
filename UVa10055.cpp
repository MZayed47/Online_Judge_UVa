#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    long long a,b,c;

    while(scanf("%lld%lld",&a,&b)!=EOF){
        c = a-b;
        cout<< abs(c) <<endl;
    }
    return 0;
}
