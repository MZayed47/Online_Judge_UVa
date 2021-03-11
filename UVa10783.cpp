#include<iostream>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;

    while(t--){
        int a,b,c=0;
        cin>>a>>b;\
        for(int i=a; i<=b; i++){
            if(i%2==1){
                c = c+i;
            }
        }
        count++;
        cout<<"Case "<<count<<": "<<c<<endl;
    }
    return 0;
}
