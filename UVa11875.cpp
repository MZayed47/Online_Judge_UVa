#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        count++;
        int n;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a,a+n);

        int x = n/2;

        cout<<"Case "<<count<<": "<<a[x]<<endl;
    }
    return 0;
}
