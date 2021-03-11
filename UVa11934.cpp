/* Magic formula */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l){
        if(a==0 && b==0 && c==0 && d==0 && l==0){
            break;
        }
        long long f,count=0;
        for(long long x=0; x<=l; x++){
            f = a*x*x + b*x + c;
            if(f%d==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
