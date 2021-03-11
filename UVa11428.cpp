/* Cubes */

#include<bits/stdc++.h>
using namespace std;

int main()
{
repeat:
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        for(int x=1; x<=60; x++){
            for(int y=1; y<=x; y++){
                if((x*x*x)-(y*y*y)==n){
                    cout<<x<<" "<<y<<endl;
                    goto repeat;
                }
            }
        }
        cout<<"No solution"<<endl;
    }
    return 0;
}
