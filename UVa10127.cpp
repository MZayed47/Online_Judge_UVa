/* Ones */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int temp=1, rem, count=0;
        if(n%2!=0 && n%5!=0){
            while(1){
                count++;
                rem = temp%n;
                if(rem==0){
                    cout<<count<<endl;
                    break;
                }
                temp = rem*10 + 1;
            }
        }
    }
    return 0;
}
