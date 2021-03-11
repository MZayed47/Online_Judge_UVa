#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,x,y,m,a[100000],j=0,count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count9=0,count8=0;
        cin>>n;
        for(long long i=1; i<=n; i++){
            m = i;
            while(m>0){
                x = m/10;
                y = m%10;
                m = x;
                a[j] = y;
                j++;
            }
        }
        for(long long k=0; k<j; k++){
            if(a[k]==0){
                count0++;
            }
            if(a[k]==1){
                count1++;
            }
            if(a[k]==2){
                count2++;
            }
            if(a[k]==3){
                count3++;
            }
            if(a[k]==4){
                count4++;
            }
            if(a[k]==5){
                count5++;
            }
            if(a[k]==6){
                count6++;
            }
            if(a[k]==7){
                count7++;
            }
            if(a[k]==8){
                count8++;
            }
            if(a[k]==9){
                count9++;
            }
        }
        cout<<count0<<" "<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<" "<<count5<<" "<<count6<<" "<<count7<<" "<<count8<<" "<<count9<<endl;
    }
}
