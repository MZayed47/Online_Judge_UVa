/* Where is the marble? */
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,q,c=0;

    while(cin>>n>>q){
        c++;
        if(n==0 && q==0){
            break;
        }
        int a[n],b[q];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int j=0; j<q; j++){
            cin>>b[j];
        }

        sort(a,a+n);

        cout<<"CASE# "<<c<<":"<<endl;

        for(int j=0; j<q; j++){
            int count=0;
            for(int i=0; i<n; i++){
                if(a[i]==b[j] && count==0){
                    count=i+1;
                    cout<<b[j]<<" found at "<<count<<endl;
                }
            }
            if(count==0){
                cout<<b[j]<<" not found"<<endl;
            }
        }
    }
    return 0;
}
