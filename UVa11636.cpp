/* Hello World */
#include<iostream>
using namespace std;

int main()
{
    int n,c=0;
    while(cin>>n){
            c++;
        if(n<0){
            break;
        }
        int i=0,temp=1,count=0;
        while(temp<n){
            temp = temp*2;
            count++;
        }
        cout<<"Case "<<c<<": "<<count<<endl;
    }
    return 0;
}
