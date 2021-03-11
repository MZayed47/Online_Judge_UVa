/* Group Reverse */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    while(cin>>n)
    {
        if(n==0){
            break;
        }
        cin>>str;
        int l = str.length();

        int d=l/n;
        for(int i=1; i<=n; i++){
            int a=i*d;
            for(int j=a-1; j>=a-d; j--)
                cout<<str[j];
        }
        cout<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string str;
    while(cin>>a){
        if(a==0){
            break;
        }
        cin>>str;
        int l = str.length();
        int d;
        int count=0;
        for(int i=1; i<=l/a; i++){
            d = i*a;
            for(int j=d-1; j>=d-a; j--){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string str;
    while(cin>>a){
        if(a==0){
            break;
        }
        cin>>str;
        int l = str.length();
        int d=0;
        int count=0;
        while(d<l){
            for(int j=a+d-1; j>=d; j--){
                cout<<str[j];
            }
            d = d+a;
        }
        cout<<endl;
    }
    return 0;
}
*/
