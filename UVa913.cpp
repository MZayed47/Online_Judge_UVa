/* Joana and the Odd Numbers */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        cout<<(((n*(n+2))/2)*3)-6<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        long long i,j,k=1,l=1,temp=0;

        long long x = (n+1)/2;
        for(i=1; i<=x; i++){
            for(j=1; j<=l; j++){
                if(i==x && j>l-3){
                    temp = temp+k;
                }
                //printf("%d ",k);
                k = k+2;
            }
            l = l+2;
            //printf("\n");
        }
        cout<<temp<<endl;
    }
    return 0;
}
*/
