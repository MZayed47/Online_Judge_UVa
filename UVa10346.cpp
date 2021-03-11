/* Peters Smoke */

#include<iostream>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k){
        int x,y,total=n;
        if(k>1){
        while(n>=k){
            x = n/k;
            y = n%k;
            n = x+y;
            total = total+x;
        }
        }
        cout<<total<<endl;
    }
    return 0;
}
