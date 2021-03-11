/* To carry or not to carry */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long a,b;

    while(cin>>a>>b){
        long long p,q,x,y,u,v,m[100],n[100],i=0,j=0;

        p = a;
        q = b;

        while(p!=0){
            x = p/2;
            y = p%2;
            p = x;
            m[i] = y;
            i++;
        }

        while(q!=0){
            u = q/2;
            v = q%2;
            q = u;
            n[j] = v;
            j++;
        }

        int c=0;
        for(long long k=0,l=0;  k<i,l<j;  k++,l++){
            if(k<i && l<j){
                if(m[k]==1 && n[l]==1){
                    c++;
                }
            }
        }
        if(c==0){
            cout<<a+b<<endl;
        }
        if(c!=0){
            cout<<abs(a-b)<<endl;
        }
    }
    return 0;
}
/*
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        cout<<(a^b)<<endl;
    }
    return 0;
}
*/
