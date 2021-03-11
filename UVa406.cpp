/* Prime Cuts */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    while(cin>>n>>c){
        int a[1000],i,j,k=0;
        a[0] = 1;
        for(i=1; i<=n; i++){
            for(j=2; j<i; j++){
                if(i%j==0){
                    break;
                }
            }
            if(j==i){
                k++;
                a[k]=i;
            }
        }
        int x = k%2;
        int y = k/2;

        if(2*c>(k+1)){
            cout<<n<<" "<<c<<":";
            for(int p=0; p<=k; p++){
                cout<<" "<<a[p];
            }
        }
        else{
            cout<<n<<" "<<c<<":";
            for(int p=(k/2)-c+1; p<=(k/2)+c-1; p++){
                cout<<" "<<a[p];
            }
            if(k%2==1){
                cout<<" "<<a[(k/2)+c];
            }
        }
        cout<<endl<<endl;
    }
    return 0;
}
