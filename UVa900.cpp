/* Brick Wall Patterns */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }

        int first=0,second=1,next;

        for(int m=1; m<=n; m++){
            if(n<=1){
                next=m;
            }
            else{
                next= first + second;
                first = second;
                second = next;
            }
        }
        printf("%d\n",next);
    }
    return 0;
}
