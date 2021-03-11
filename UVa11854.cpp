#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)){
            if(a==0 && b==0 && c==0){
                break;
            }
        int x,y,z;
        x = a*a;
        y = b*b;
        z = c*c;
        if(x+y==z){
            cout<<"right"<<endl;
        }
        else if(y+z==x){
            cout<<"right"<<endl;
        }
        else if(z+x==y){
            cout<<"right"<<endl;
        }
        else{
            cout<<"wrong"<<endl;
        }
    }
    return 0;
}
