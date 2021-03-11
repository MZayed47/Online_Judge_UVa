/*  Cabin Baggage  */
#include<iostream>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        double l,w,d,wt;
        cin>>l>>w>>d>>wt;

        if(((l<=56 && w<=45 && d<=25) || ((l+w+d)<=125)) && wt<=7){
            cout<<"1"<<endl;
            count++;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    cout<<count<<endl;
    return 0;
}
