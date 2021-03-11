#include<bits/stdc++.h>
using namespace std;

int main()
{
repeat:
    int n;
    while(cin>>n){
        int a[n],temp[n],count=n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int j;
        for(j=0; j<n-1; j++){
            temp[j] = abs(a[j] - a[j+1]);
        }
        sort(temp,temp+j);
        for(int k=0; k<n-1; k++){
            if(temp[k]==temp[k+1]){
                count=0;
                break;
            }
            if(temp[k]>n-1){
                count=0;
                break;
            }
        }
        if(count==0){
            cout<<"Not jolly"<<endl;
        }
        else{
            cout<<"Jolly"<<endl;
        }
    }
    return 0;
}
