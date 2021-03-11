/* Jumping Mario */
#include<iostream>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;

    while(t--){
        int w,high=0,low=0;
        cin>>w;
        int a[w];

        for(int i=0; i<w; i++){
            cin>>a[i];
        }
        for(int j=1; j<w; j++){
            if(a[j]>a[j-1]){
                high++;
            }
            if(a[j]<a[j-1]){
                low++;
            }
        }
        count++;
        cout<<"Case "<<count<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
