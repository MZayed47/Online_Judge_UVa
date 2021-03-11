/* Digit Sum */
#include<iostream>
using namespace std;

int main()
{
    long long m,n;
    while(cin>>m>>n){
        if(m==0 && n==0){
            break;
        }

        long long total=0,a;

        for(long long i=m; i<=n; i++){
                a = i;
            long long x,y=n;
            while(y!=0){
                x = a%10;
                y = a/10;
                total = total + x;
                a = y;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
