#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    while(cin>>x>>y){
        if(x<0 && y<0){
            break;
        }
        int d = abs(x-y);
        if(d<=50){
            cout<<abs(x-y)<<endl;
        }
        if(d>50){
            cout<<100 - abs(x-y)<<endl;
        }
    }
    return 0;
}
