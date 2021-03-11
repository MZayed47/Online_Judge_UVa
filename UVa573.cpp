/* Snail */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,u,d,f;
    while(cin>>h>>u>>d>>f){
        if(h==0){
            break;
        }

        double hac,dc,count;
        hac = 0;
        dc = u;
        count = 0;

        while(1){
            count++;
            hac = hac + dc;

            if(hac>h){
                cout<<"success on day "<<count<<endl;
                break;
            }

            hac = hac - d;

            if(hac<0){
                cout<<"failure on day "<<count<<endl;
                break;
            }

            dc = dc - u*(f/100.0);

            if(dc<0){
                dc = 0;
            }
        }
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
repeat:
    double h,u,d,f;
    while(cin>>h>>u>>d>>f){
        if(h==0){
            break;
        }
        double hac,has,dc,count=1;
        hac = u;
        dc = u;

        while(hac<=h){
            has = hac - d;
            dc = dc - ((u*f)/100.0);
            hac = dc + has;
            if(has<0){
                cout<<"failure on day "<<count<<endl;
                goto repeat;
            }
            count++;
        }
        cout<<"success on day "<<count<<endl;
    }
    return 0;
}
*/
