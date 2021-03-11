/* Perfection */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n){
        if(n==0){
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        int sum=0;
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum = sum+i;
            }
        }

        int temp=n,count=0;
        while(temp!=0){
            temp = temp/10;
            count++;
        }

        if(count==1){
            cout<<"    ";
            if(sum==n){
                cout<<n<<"  "<<"PERFECT"<<endl;
            }
            else if(sum<n){
                cout<<n<<"  "<<"DEFICIENT"<<endl;
            }
            else if(sum>n){
                cout<<n<<"  "<<"ABUNDANT"<<endl;
            }
        }

        else if(count==2){
            cout<<"   ";
            if(sum==n){
                cout<<n<<"  "<<"PERFECT"<<endl;
            }
            else if(sum<n){
                cout<<n<<"  "<<"DEFICIENT"<<endl;
            }
            else if(sum>n){
                cout<<n<<"  "<<"ABUNDANT"<<endl;
            }
        }

        else if(count==3){
            cout<<"  ";
            if(sum==n){
                cout<<n<<"  "<<"PERFECT"<<endl;
            }
            else if(sum<n){
                cout<<n<<"  "<<"DEFICIENT"<<endl;
            }
            else if(sum>n){
                cout<<n<<"  "<<"ABUNDANT"<<endl;
            }
        }

        else if(count==4){
            cout<<" ";
            if(sum==n){
                cout<<n<<"  "<<"PERFECT"<<endl;
            }
            else if(sum<n){
                cout<<n<<"  "<<"DEFICIENT"<<endl;
            }
            else if(sum>n){
                cout<<n<<"  "<<"ABUNDANT"<<endl;
            }
        }

        else if(count==5){
            if(sum==n){
                cout<<n<<"  "<<"PERFECT"<<endl;
            }
            else if(sum<n){
                cout<<n<<"  "<<"DEFICIENT"<<endl;
            }
            else if(sum>n){
                cout<<n<<"  "<<"ABUNDANT"<<endl;
            }
        }
    }
    return 0;
}
