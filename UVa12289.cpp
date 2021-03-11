#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    int n;
    char a[10],chr;
    cin>>n>>chr;
    while(n--)
    {

        gets(a);
        if(strlen(a)==5){
            printf("3\n");
        }
        else if((a[0]=='o' && a[1]=='n')||
                (a[0]=='o' && a[1]=='e')||
                (a[1]=='n' && a[2]=='e')||
                (a[0]=='o' && a[2]=='e')||
                (a[0]=='o' && a[2]=='n'))
        {
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }
    return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;

        getline(cin,str);

        int c = str.length();
        int count1=0,count2=0,count3=0;

        if(c==5){
            if((str[0]=='t' && str[1]=='h' && str[2]=='r' && str[3]=='e') ||
               (str[0]=='t' && str[1]=='h' && str[2]=='r' && str[4]=='e') ||
               (str[0]=='t' && str[1]=='h' && str[3]=='e' && str[4]=='e') ||
               (str[0]=='t' && str[2]=='r' && str[3]=='e' && str[4]=='e') ||
               (str[1]=='h' && str[2]=='r' && str[3]=='e' && str[4]=='e'))
            cout<<"3"<<endl;
        }
        else if(c==3){
            if((str[0]=='o' && str[1]=='n') ||
               (str[0]=='o' && str[2]=='e') ||
               (str[1]=='n' && str[2]=='e'))
            {
                cout<<"1"<<endl;
            }
            else if( (str[0]=='t' && str[1]=='w') ||
                     (str[0]=='t' && str[2]=='o') ||
                     (str[1]=='w' && str[2]=='o') )
            {
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}
*/
