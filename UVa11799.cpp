/* Horror Dash */
#include<iostream>
using namespace std;

int main()
{
    int t,test=0;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n],count = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>count){
                count = a[i];
            }
        }

        test++;
        cout<<"Case "<<test<<": "<<count<<endl;
    }
    return 0;
}
