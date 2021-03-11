#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,i;
    string str;
    while(getline(cin,str)){
        l = str.length();
        for(i=0; i<l; i++){
            printf("%c",str[i] - 7);
        }
        printf("\n");
    }
    return 0;
}
