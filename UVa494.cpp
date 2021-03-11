/* Kindergarden Counting */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        int i=0,j=0,l = str.length(),count=0;

        while(i<l){
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
                for(j=i; j<l ; j++){
                    if(!((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z')) || j==l-1){
                        count++;
                        break;
                    }
                }
            }
            i=j+1;
            j++;
        }
        cout<<count<<endl;
    }
    return 0;
}
