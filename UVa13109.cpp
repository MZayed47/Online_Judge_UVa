/* Elephants */
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
repeat:
    while(t--){
        long long n,mw;
        cin>>n>>mw;
        long long w[n];
        for(long long i=0; i<n; i++){
            cin>>w[i];
        }
        sort(w,w+n);
        long long temp=0,count=0;
        for(long long j=0; j<n; j++){
            temp = temp + w[j];
            if(temp>=mw){
                cout<<count<<endl;
                goto repeat;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
