/* Identifying tea */
#include<iostream>
using namespace std;

int main()
{
    int t;

    while(cin>>t){
        int a[20],count=0;
        for(int i=0; i<5; i++){
            cin>>a[i];
        }
        for(int i=0; i<5; i++){
            if(t==a[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
