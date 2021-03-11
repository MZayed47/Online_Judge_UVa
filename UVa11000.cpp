/* Bee */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        if(n==-1){
            break;
        }

        long long maleT=0,femaleT=1,total=1,maleB=0,femaleB=0;

        for(long long y=1; y<=n; y++){
            maleT = total;
            maleB = femaleT;
            femaleT = femaleT + femaleB;
            femaleB = maleB;
            total = maleT + femaleT;
        }
        cout<<maleT<<" "<<total<<endl;
    }
    return 0;;
}
