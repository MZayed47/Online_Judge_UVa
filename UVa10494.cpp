/* If we were a child again */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;
    char c;
    while(cin>>a>>c>>b){
        if(c=='/'){
            cout<<a/b<<endl;
        }
        if(c=='%'){
            cout<<a%b<<endl;
        }
    }
    return 0;
}
