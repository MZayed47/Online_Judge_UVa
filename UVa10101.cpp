/* Bangla Numbers */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,count=0;
    while(cin>>n){
        count++;

        printf("%4d. ",count);

        if(n==0){
            cout<<n;
        }

        else{
            long long i=0,j,a[100],b[100],c[100],d[100];
            while(n!=0){
                a[i] = n%100;

                n = n/100;
                b[i] = n%10;

                n = n/10;
                c[i] = n%100;

                n = n/100;
                d[i] = n%100;

                n = n/100;

                i++;
            }

            for(j=i-1; j>=0; j--){
                if(d[j]!=0){
                    cout<<d[j]<<" lakh ";
                }
                if(c[j]!=0){
                    cout<<c[j]<<" hajar ";
                }
                if(b[j]!=0){
                    cout<<b[j]<<" shata ";
                }
                if(a[j]!=0){
                    cout<<a[j];
                }
                if(j>0){
                    cout<<" kuti ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
