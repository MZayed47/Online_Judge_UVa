/* Bafana Bafana */
#include<iostream>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        count++;
        int n,k,p;
        cin>>n>>k>>p;
        while(p--){
            k++;
            if(k>n){
                k=1;
            }
        }
        cout<<"Case "<<count<<": "<<k<<endl;
    }
    return 0;
}
