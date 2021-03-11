/* Division of Nlogonia */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    while(cin>>a){
        if(a==0){
            break;
        }
        long long m,n;
        cin>>m>>n;
        while(a--){
            long long x,y;
            cin>>x>>y;
            if(x==m || y==n){
                cout<<"divisa"<<endl;
            }
            else if(x>m && y>n){
                cout<<"NE"<<endl;
            }
            else if(x>m && y<n){
                cout<<"SE"<<endl;
            }
            else if(x<m && y>n){
                cout<<"NO"<<endl;
            }
            else if(x<m && y<n){
                cout<<"SO"<<endl;
            }
        }
    }
    return 0;
}
