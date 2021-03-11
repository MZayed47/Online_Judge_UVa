/* You can say 11 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        if(n==0){
            break;
        }
        if(n%11==0){
            cout<<n<<" is a multiple of 11."<<endl;
        }
        else{
            cout<<n<<" is not a multiple of 11."<<endl;
        }
    }
    return 0;
}
