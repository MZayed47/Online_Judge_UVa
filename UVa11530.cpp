/* SMS typing */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    for(int x=0; x<=t; x++){
        char str[100];

        gets(str);

        int l,temp=0;

        l = strlen(str);

        if(l==0){
            continue;
        }

        for(int i=0; i<l; i++){
            if(str[i]=='a' || str[i]=='d' || str[i]=='g' || str[i]=='j' || str[i]=='m' || str[i]=='p' || str[i]=='t' || str[i]=='w' || str[i]==' '){
                temp = temp + 1;
            }
            if(str[i]=='b' || str[i]=='e' || str[i]=='h' || str[i]=='k' || str[i]=='n' || str[i]=='q' || str[i]=='u' || str[i]=='x'){
                temp = temp + 2;
            }
            if(str[i]=='c' || str[i]=='f' || str[i]=='i' || str[i]=='l' || str[i]=='o' || str[i]=='r' || str[i]=='v' || str[i]=='y'){
                temp = temp + 3;
            }
            if(str[i]=='s' || str[i]=='z'){
                temp = temp + 4;
            }
        }
        count++;
        cout<<"Case #"<<count<<": "<<temp<<endl;
    }
    return 0;
}
