/* Mirror Clock */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,t,x,y;
    char c;
    cin>>t;
    while(t--){
        cin>>h>>c>>m;
        x = 11-h;
        y = 60-m;
        if(x==-1 && m!=0){
            x = 11;
        }
        if(m==0){
            x = x+1;
            y = 0;
        }
        if(x<0){
            x = abs(x);
        }
        if(x==0){
            x = 12;
        }

        if(x>9){
            printf("%d:",x);
        }
        else{
            printf("0%d:",x);
        }
        if(y>9){
            printf("%d\n",y);
        }
        else{
            printf("0%d\n",y);
        }
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,m;
        char c;
        cin>>h>>c>>m;

        if((h==12 || h==6) && m==0){
            if(h==12){
                cout<<h<<":00"<<endl;
            }
            else{
                cout<<"0"<<h<<":00"<<endl;
            }
        }
        else if((h==12 || h==6) && m>0){
            h = h-1;
            m = 60-m;
            if(h==6){
                cout<<"0"<<h<<":";
            }
            else{
                cout<<h<<":";
            }
            if(m<10){
                cout<<"0"<<m<<endl;
            }
            else{
                cout<<m<<endl;
            }
        }
        else if((h!=12 && h!=6) && m==0){
            h = 12-h;
            if(h<10){
                cout<<"0"<<h<<":00"<<endl;
            }
            else{
                cout<<h<<":00"<<endl;
            }
        }
        else if((h!=12 && h!=6) && m>0){
            h = abs(12-h-1);
            m = 60-m;
            if(h==0){
                cout<<"12:";
            }
            else if(h<10){
                cout<<"0"<<h<<":";
            }
            else{
                cout<<h<<":";
            }
            if(m<10){
                cout<<"0"<<m<<endl;
            }
            else{
                cout<<m<<endl;
            }
        }
    }
    return 0;
}
*/
