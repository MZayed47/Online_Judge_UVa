/* All in all */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    while(cin>>s>>t){
        int i,j=0,count=0;
        for(i=0; i<s.length(); i++){
            while(j<t.length()){
                if(s[i]==t[j]){
                    j++;
                    count++;
                    break;
                }
                j++;
            }
        }
        if(count==s.length()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
