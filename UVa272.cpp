/* TEX Quotes */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,count=0,l;
    string str;
    while(getline(cin,str)){
        for(i=0; i<str.length(); i++){
            if(str[i]=='"'){
                count++;
                if(count%2==1){
                    cout<<"``";
                }
                else{
                    cout<<"''";
                }
            }
            else{
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        int i=0;
        while(i<str.length()){
            if(str[i]=='"'){
                cout<<"``";
                i++;

                while(i<str.length()){
                    if(str[i]=='"'){
                        cout<<"''";
                        i++;
                        break;
                    }
                    cout<<str[i];
                    i++;
                }
            }
            if(str[i]!='"'){
                cout<<str[i];
                i++;
            }
        }
        cout<<endl;
    }
}
*/
