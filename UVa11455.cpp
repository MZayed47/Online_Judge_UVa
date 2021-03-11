/* Behold my quadrangle */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b+c)>d && (b+c+d)>a && (c+d+a)>b && (d+a+b)>c){
            if(a==b && b==c && c==d){
                cout<<"square"<<endl;
            }
            else if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
                cout<<"rectangle"<<endl;
            }
            else{
                cout<<"quadrangle"<<endl;
            }
        }
        else{
            cout<<"banana"<<endl;
        }
    }
    return 0;
}
