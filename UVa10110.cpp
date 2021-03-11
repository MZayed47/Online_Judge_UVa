/* Light, more light */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        long long x,i;
        if(n==0){
            break;
        }
        x = sqrt(n);
        if(x*x==n){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
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
        long long count=0,i;
        if(n==0){
            break;
        }
        for(i=1; i<=n; i++){
            if(n%i==0){
                count++;
            }
        }
        if(count%2==0){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}
*/
