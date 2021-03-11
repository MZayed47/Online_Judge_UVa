#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        long a[n];
        for(long i=0; i<n; i++){
            cin>>a[i];
        }
        long m,x=1000000,y,z,temp;
        cin>>m;

        for(long j=0; j<n; j++){
            for(long k=0; k<n; k++){
                temp = a[j] + a[k];

                if(temp==m && j!=k){
                    if(a[j]>a[k]){
                        if((a[j]-a[k])<x){
                            y = a[k];
                            z = a[j];
                            x = a[j]-a[k];
                        }
                    }
                    else if(a[j]<=a[k]){
                        if((a[k]-a[j])<x){
                            y = a[j];
                            z = a[k];
                            x = a[k]-a[j];
                        }
                    }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<y<<" and "<<z<<"."<<endl<<endl;
    }
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        long a[n];
        for(long i=0; i<n; i++){
            cin>>a[i];
        }
        long m,temp=0,temp1[100],temp2[100],dif[100],x=0;
        cin>>m;

        for(long j=0; j<n; j++){
            for(long k=0; k<n; k++){
                temp = a[j] + a[k];

                if(temp==m && j!=k){
                    temp1[x] = a[j];
                    temp2[x] = a[k];
                    dif[x] = abs(a[j]-a[k]);
                    x++;
                }
            }
        }

        long l=0,temp3=0,temp4;
        while(l!=x){
            for(long y=0; y<=x; y++){
                if(dif[l]<=dif[y]){
                    temp3++;
                }
                if(temp3==x){
                    temp4 = l;
                }
            }
            l++;
        }

        if(temp1[temp4]<=temp2[temp4]){
            cout<<"Peter should buy books whose prices are "<<temp1[temp4]<<" and "<<temp2[temp4]<<"."<<endl<<endl;
        }
        if(temp1[temp4]>temp2[temp4]){
            cout<<"Peter should buy books whose prices are "<<temp2[temp4]<<" and "<<temp1[temp4]<<"."<<endl<<endl;
        }
    }
    return 0;
}

*/
