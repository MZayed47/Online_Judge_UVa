/* Reverse and Add */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long temp1,rem1,reverse1=0;
        temp1 = n;
        while(temp1!=0){
            rem1 = temp1%10;
            reverse1 = reverse1*10+rem1;
            temp1 = temp1/10;
        }

        long long add,count=0;
repeat:
        add = n + reverse1;
        count++;

        long long temp2,rem2,reverse2=0;
        temp2 = add;
        while(temp2!=0){
            rem2 = temp2%10;
            reverse2 = reverse2*10+rem2;
            temp2 = temp2/10;
        }
        if(reverse2==add){
            cout<<count<<" "<<add<<endl;
        }
        else{
            n = add;
            reverse1 = reverse2;
            goto repeat;
        }
    }
    return 0;
}
