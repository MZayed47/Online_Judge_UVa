/* The Hotel With Infinite Rooms */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,d;
    while(cin>>s>>d){
        long long temp=0;
        while(temp<d){
            temp = temp+s;
            s++;
        }
        cout<<s-1<<endl;
    }
    return 0;
}
