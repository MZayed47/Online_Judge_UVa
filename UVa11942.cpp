/* Lumberjack Sequencing */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--){
        int a[100];
        for(int i=0; i<10; i++){
            cin>>a[i];
        }
        int count1=0,count2=0;
        for(int i=0; i<9; i++){
            if(a[i]>a[i+1]){
                count1++;
            }
            if(a[i]<a[i+1]){
                count2++;
            }
        }
        if(count1!=0 && count1!=9){
            cout<<"Unordered"<<endl;
        }
        else if(count2!=0 && count2!=9){
            cout<<"Unordered"<<endl;
        }
        else{
            cout<<"Ordered"<<endl;
        }
    }
    return 0;
}
