/* Marvelous Mazes */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,i,j,count=0;
    string str;
    while(getline(cin,str)){
        l = str.length();
        for(i=0; i<l; i++){
            switch(str[i])
            {
                case 'b':{
                    for(j=0; j<count; j++)
                        cout<<" ";
                    count=0;
                    break;
                }
                case '1':
                    count=count+1;
                    break;
                case '2':
                    count=count+2;
                    break;
                case '3':
                    count=count+3;
                    break;
                case '4':
                    count=count+4;
                    break;
                case '5':
                    count=count+5;
                    break;
                case '6':
                    count=count+6;
                    break;
                case '7':
                    count=count+7;
                    break;
                case '8':
                    count=count+8;
                    break;
                case '9':
                    count=count+9;
                    break;
                case '!':
                    cout<<endl;
                default:
                {
                    for(j=0; j<count; j++)
                        cout<<str[i];
                    count=0;
                    break;
                }
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
        int i,j,k,l;
        l = str.length();

        for(i=0; i<l; i++){
            int d,n=0;
            j = i;
            while(!(str[j]>='A' && str[j]<='Z') && str[j]!='*' && str[j]!='b' && str[j]!='!' && str[j]!='\0'){
                d = str[j] - '\0' - 48;
                n = n + d;
                j++;
            }

            if(str[j]=='*'){
                for(k=0; k<n; k++){
                    cout<<str[j];
                }
            }
            else if(str[j]=='b'){
                for(k=0; k<n; k++){
                    cout<<" ";
                }
            }
            else if(str[j]=='!'){
                cout<<endl;
            }
            else if(str[j]>='A' && str[j]<='Z'){
                for(k=0; k<n; k++){
                    cout<<str[j];
                }
            }

            i = j;
        }
        cout<<endl;
    }
    return 0;
}
*/
