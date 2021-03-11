/* Zero or one */
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==b && b==c){
            cout<<"*"<<endl;
        }
        if(a==b && a!=c){
            cout<<"C"<<endl;
        }
        if(b==c && c!=a){
            cout<<"A"<<endl;
        }
        if(c==a && a!=b){
            cout<<"B"<<endl;
        }
    }
    return 0;
}


/*
#include<iostream>
using namespace std;

int main()
{
    while(1){
        int a[10];
        int count1=0,count2=0,temp1=0,temp2=0;
        for(int i=1; i<=3; i++){
            cin>>a[i];
        }
        for(int j=1; j<=3; j++){
            if(a[j]==1){
                count1++;
                temp1=j;
            }
            if(count1==1 && j==3){
                if(temp1==1){
                    cout<<"A"<<endl;
                }
                if(temp1==2){
                    cout<<"B"<<endl;
                }
                if(temp1==3){
                    cout<<"C"<<endl;
                }
            }
        }
        for(int k=1; k<=3; k++){
            if(a[k]==0){
                count2++;
                temp2=k;
            }
            if(count2==1 && k==3){
                if(temp2==1){
                    cout<<"A"<<endl;
                }
                if(temp2==2){
                    cout<<"B"<<endl;
                }
                if(temp2==3){
                    cout<<"C"<<endl;
                }
            }
        }
        if(count1!=1 && count2!=1){
            cout<<"*"<<endl;
        }
    }
    return 0;
}
*/
