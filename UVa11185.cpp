/* Ternary */
#include<iostream>
using namespace std;

int main()
{
    int a;
    while(cin>>a){
        int x=a,y,m[100],i=0,j=0;
        if(a<0){
            break;
        }
        if(a==0){
            cout<<0;
        }
        while(x!=0){
            x = a/3;
            y = a%3;
            a = x;
            m[i] = y;
            i++;
        }
        for(j=i-1; j>=0; j--){
            cout<<m[j];
        }
        cout<<endl;
    }
    return 0;
}
