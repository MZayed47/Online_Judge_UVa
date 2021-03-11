/* Above average */
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,count=0;
        cin>>n;
        int a[n],total=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int j=0; j<n; j++){
            total = total + a[j];
        }
        double x;
        x = double(total)/double(n);
        for(int k=0; k<n; k++){
            if(a[k]>x){
                count++;
            }
        }
        double m;
        m = (double(count)*double(100))/double(n);
        printf("%.3lf",m);
        cout<<"%"<<endl;
    }
    return 0;
}
