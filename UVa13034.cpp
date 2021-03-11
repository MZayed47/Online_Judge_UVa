/* Solve Everything */
#include<iostream>
using namespace std;

int main()
{
    int s,count=0;
    cin>>s;
    while(s--){
        count++;
        int a[100],count1=0;
        for(int i=0; i<13; i++){
            cin>>a[i];
        }
        for(int j=0; j<13; j++){
            if(a[j]==0){
                count1++;
            }
        }
        if(count1==0){
            cout<<"Set #"<<count<<": Yes"<<endl;
        }
        if(count1!=0){
            cout<<"Set #"<<count<<": No"<<endl;
        }
    }
    return 0;
}
