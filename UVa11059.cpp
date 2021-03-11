/* Maximum Product */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,count=0;
    while(cin>>n){
        count++;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        long long temp1=1,temp2=0,p,x;

        for(int i=0; i<n; i++){
            x=0;
            for(int j=i; j<n-1; j++){
                x++;
                for(int k=i; k<=x+j; k++){
                    temp1 = temp1 * a[k];
                }
                if(temp1>temp2){
                    temp2 = temp1;
                }
            }
        }

        cout<<"Case #"<<count<<": The maximum product is "<<temp2<<"."<<endl<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,count=0;
    while(cin>>n){
        count++;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        long long temp1=1,temp2=0,p,x=0,i,j,c=0;

    //for(j=0; j<n; j++){
repeat:
        for(i=x; i<n; i++){
            if(a[i]==0){
                x = i+1;
                temp2 = temp1;
                temp1 = 1;
                goto repeat;
            }

            temp1 = temp1 * a[i];

            if(temp1>temp2){
                temp2 = temp1;
            }

            if(a[i]<0){
                c++;
            }
        }
    //}
        cout<<"Case #"<<count<<": The maximum product is "<<temp2<<"."<<endl<<endl;
    }
    return 0;
}
*/
