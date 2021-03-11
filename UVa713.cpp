/* Adding reversed numbers */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        long long temp1=a,rev1=0,rem1;
        while(temp1!=0){
            rem1 = temp1%10;
            rev1 = rev1*10 + rem1;
            temp1 = temp1/10;
        }

        long long temp2=b,rev2=0,rem2;
        while(temp2!=0){
            rem2 = temp2%10;
            rev2 = rev2*10 + rem2;
            temp2 = temp2/10;
        }

        long long add;
        add = rev1 + rev2;

        long long temp3=add,rev3=0,rem3;
        while(temp3!=0){
            rem3 = temp3%10;
            rev3 = rev3*10 + rem3;
            temp3 = temp3/10;
        }
        cout<<rev3<<endl;
    }
    return 0;
}
