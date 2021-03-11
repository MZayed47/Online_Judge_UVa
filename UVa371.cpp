/* Ackermann Functions */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,h,count,temp,term,p,x;
    while(cin>>l>>h){
        term = 0;
        if(l==0 || h==0){
            break;
        }
        if(l>h){
            swap(l,h);
        }

        for(x=l; x<=h; x++){
            p = x;
            count = 1;
            if(p%2==0){
                p = p/2;
            }
            else{
                p = 3*p + 1;
            }
            while(p!=1){
                if(p%2==0){
                    p/=2;
                    count++;
                }
                else{
                    p=3*p+1;
                    count++;
                }
            }
            if(count>term){
                term = count;
                temp = x;
            }
        }
        cout<<"Between "<<l<<" and "<<h<<", "<<temp<<" generates the longest sequence of "<<term<<" values."<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,h,p,q,temp,count,term,x,y,a;
    while(cin>>l>>h)
    {
        term = 0;
        if(l==0 || h==0){
            break;
        }

        if(l<=h){
            p = l;
            q = h;
        }
        else{
            p = h;
            q = l;
        }

        for(x=p; x<=q; x++){
            a=x;
            for(y=1; y!=0; y++){
                if(a%2==0){
                    a = a/2;
                }
                else{
                    a = a*3 + 1;
                }
                if(a==1){
                    count = y;
                    break;
                }
            }

            if(count>term){
                term = count;
                temp = x;
            }
        }
        cout<<"Between "<<l<<" and "<<h<<", "<<temp<<" generates the longest sequence of "<<term<<" values."<<endl;
    }
    return 0;
}
*/
