#include<iostream>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;

    while(t--){
        count++;
        int l,w,h;
        cin>>l>>w>>h;
        if(l>20 || w>20 || h>20){
            cout<<"Case "<<count<<": bad"<<endl;
        }
        else{
            cout<<"Case "<<count<<": good"<<endl;
        }
    }
    return 0;
}
