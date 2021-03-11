/* Optical Reader */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        while(n--){
            int count=0;
            int a[100];

            for(int i=0; i<5; i++){
                cin>>a[i];
            }

            int temp;
            for(int i=0; i<5; i++){
                if(a[i]<=127){
                    temp = i;
                    count++;
                }
            }

            if(count!=1){
                cout<<"*"<<endl;
            }
            else{
                if(temp==0){
                    cout<<"A"<<endl;
                }
                else if(temp==1){
                    cout<<"B"<<endl;
                }
                else if(temp==2){
                    cout<<"C"<<endl;
                }
                else if(temp==3){
                    cout<<"D"<<endl;
                }
                else if(temp==4){
                    cout<<"E"<<endl;
                }
            }
        }
    }
    return 0;
}
