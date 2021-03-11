/* Score */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        char str[100];
        cin>>str;

        int l,count=0,temp=0;
        l = strlen(str);

        for(int i=0; i<l; i++){
            if(str[i]=='O'){
                count++;
                temp = temp + count;
            }
            else if(str[i]=='X'){
                count=0;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}
