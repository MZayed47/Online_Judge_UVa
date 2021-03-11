#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int f,s,a,e,p=0;
        cin>>f;
        for(int i=0; i<f; i++){
            cin>>s>>a>>e;
            p = p+(s*e);
        }
        cout<<p<<endl;
    }
    return 0;
}
