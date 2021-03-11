#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,l,count=0;
    while(cin>>n>>l){
        count++;
        if(n<0 && l<0){
            break;
        }
        int a=n,i;
        for(i=1; i!=0; i++){
            if(a==1){
                break;
            }
            if(a%2==0){
                a = a/2;
            }
            else{
                a = a*3 + 1;
            }
            /*if(a>l){
                break;
            }*/
        }
        cout<<"Case "<<count<<": A = "<<n<<", limit = "<<l<<", number of terms = "<<i<<endl;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,c=0;
    while(cin>>n>>l){
        if(n<0 && l<0){
            break;
        }
        int count=0;
        int a = n;
        while(a<=l){
            if(a==1){
                count++;
                break;
            }
            else if(a%2==0){
                count++;
                a = a/2;
            }
            else if(a%2==1){
                count++;
                a = a*3 + 1;
            }
        }
        c++;
        cout<<"Case "<<c<<": A = "<<n<<", limit = "<<l<<", number of terms = "<<count<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,l,c=0;
    while(cin>>x>>l){
        c++;
        int count=1;
        if(x<0 && l<0){
            break;
        }
        int a = x;

        while(a!=1 && a<=l){
            if(a%2==0){
                a = a/2;
                count++;
            }
            else if(a%2!=0){
                a = (3*a) + 1;
                count++;
            }
        }
        if(a>l){
            cout<<"Case "<<c<<": A = "<<x<<", limit = "<<l<<", number of terms = "<<count-1<<endl;
        }
        else{
            cout<<"Case "<<c<<": A = "<<x<<", limit = "<<l<<", number of terms = "<<count<<endl;
        }
    }
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,l,c=0;
lebel:
    while(cin>>x>>l){
        int count=1;
        if(x<0 && l<0){
            break;
        }
        int a = x;
        c++;
repeat:
        if(a==1){
            cout<<"Case "<<c<<": A = "<<x<<", limit = "<<l<<", number of terms = "<<count<<endl;
            goto lebel;
        }
        else if(a>l){
            cout<<"Case "<<c<<": A = "<<x<<", limit = "<<l<<", number of terms = "<<count-1<<endl;
            goto lebel;
        }
        else if(a%2==0 && a<=l){
            a = a/2;
            count++;
            goto repeat;
        }
        else if(a%2!=0 && a<=l){
            a = (3*a) + 1;
            count++;
            goto repeat;
        }
    }
    return 0;
}
*/
