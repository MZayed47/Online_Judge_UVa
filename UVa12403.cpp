/* Save Setu */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long total=0,d;
    while(n--){
        string str;
        cin>>str;
        if(str=="donate"){
            cin>>d;
            total = total + d;
        }
        else if(str=="report"){
            cout<<total<<endl;
        }
    }
    return 0;
}
