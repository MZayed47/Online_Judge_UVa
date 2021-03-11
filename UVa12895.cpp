/* Armstrong Number */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        long long temp=0,c=0;
        long long n1=n,n2=n,x,q;
        while(n1!=0){
            n1 = n1/10;
            c++;
        }
        //cout<<count<<endl;

        while(n2){
            x = n2%10;
            temp = temp + pow(x,c);
            //cout<<temp<<endl;
            n2 = n2/10;
        }
        //cout<<temp<<endl;

        if(temp==n){
            cout<<"Armstrong"<<endl;
        }
        else{
            cout<<"Not Armstrong"<<endl;
        }
    }
    return 0;
}
