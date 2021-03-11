/* Different Digits */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n){
        int count=0;
        for(int a=m; a<=n; a++){
            int x=a,i=0,d[10],j;

            while(x!=0){
                d[i] = x%10;
                x = x/10;
                i++;
            }

            sort(d,d+i);

            for(j=1; j<i; j++){
                if(d[j-1]==d[j]){
                    break;
                }
            }
            if(j==i){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
