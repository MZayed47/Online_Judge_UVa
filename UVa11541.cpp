/* Decoding */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        count++;
        cout<<"Case "<<count<<": ";

        int i,j,k,l;
        l = str.length();

        for(i=0; i<l; i++){
            int d,n=0;
            j = i;
            while(!(str[j+1]>='A' && str[j+1]<='Z') && str[j+1]!='\0'){
                d = str[j+1] - '\0' - 48;
                n = n*10 + d;
                j++;
            }

            for(k=0; k<n; k++){
                cout<<str[i];
            }

            i = j;
        }
        cout<<endl;
    }
    return 0;
}
