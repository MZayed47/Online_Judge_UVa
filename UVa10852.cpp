/* Less Prime */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,p,temp1=0,temp2,i,j,count;
        cin>>n;
        for(i=n/2; i<=n; i++){
            count = 0;
            for(j=2; j<=sqrt(i); j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                x = i;
                for(p=1; p<=n/x; p++){
                    if((p*x)<=n && n<(p+1)*x){
                        if(n-(p*x)>temp1){
                            temp1 = n-(p*x);
                            temp2 = x;
                        }
                    }
                }
            }
        }
        cout<<temp2<<endl;
    }
    return 0;
}
