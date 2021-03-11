/* Parking */
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[100];
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        sort(p,p+n);
        int temp=0;
        for(int j=0; j<n-1; j++){
            temp = temp + ( p[j+1] - p[j] );
        }
        cout<<temp*2<<endl;
    }
    return 0;
}
