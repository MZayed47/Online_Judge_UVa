#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    while(cin>>n){
        count++;
        int a[n],x,y=0,temp=0,temp2=0;
        if(n==0){
            break;
        }

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            temp =  temp + a[i];
        }

        if(temp%n==0){
            x = temp/n;

            for(int i=0; i<n; i++){
                if(a[i]>x){
                    y = a[i] - x;
                    temp2 = temp2 + y;
                }
            }
            cout<<"Set #"<<count<<endl<<"The minimum number of moves is "<<temp2<<"."<<endl<<endl;
        }
    }
    return 0;
}
