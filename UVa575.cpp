/* Skew Binary */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    while(gets(str)){
        long long i,x,l,y=0;
        l = strlen(str);

        for(i=0; i<l; i++){
            x = str[i] - '0';
            y = y + ( x * ((pow(2,l-i))-1) );
        }
        if(y==0){
            break;
        }
        cout<<y<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        if(n==0){
            break;
        }

        long long i=0,x,y=0;
        while(n!=0){
            x = n%10;
            y = y + ( x * ((pow(2,i+1))-1) );
            n = n/10;
            i++;
        }
        cout<<y<<endl;
    }
    return 0;
}
*/
