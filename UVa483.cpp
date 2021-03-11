/* Word Scramble */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        int i=0,j=0,l = str.length();

        while(i<l){
            if(str[i]!=' '){
                while(str[j]!=' '){
                    j++;
                    if(str[j]=='\0'){
                        break;
                    }
                }
                for(int k=j-1; k>=i; k--){
                    cout<<str[k];
                }
            }
            if(str[j]!='\0'){
                cout<<" ";
            }
            i=j+1;
            j++;
        }
        cout<<endl;
    }
    return 0;
}
