/* Beat the Spread */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int s,d,a,b;
        cin>>s>>d;
        if(s>=d && ((s+d)%2)==0){
            a = (s+d)/2;
            b = (s-d)/2;
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
