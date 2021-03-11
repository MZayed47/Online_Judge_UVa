/* The 3n+1 Problem */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,l,h,temp,count,term,p,x;
    while(cin>>a>>b){
        term = 0;

        l = a;
        h = b;

        if(l>h){
            swap(l,h);
        }

        for(x=l; x<=h; x++){
            p = x;
            count = 1;

            while(p!=1){
                if(p%2==0){
                    p = p/2;
                    count++;
                }
                else{
                    p=3*p+1;
                    count++;
                }
            }
            if(count>=term){
                term = count;
            }
        }
        cout<<a<<" "<<b<<" "<<term<<endl;
    }
    return 0;
}
