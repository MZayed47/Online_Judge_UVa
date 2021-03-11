/* Diagonal */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int d,count=0;
    while(cin>>d){
        if(d==0){
            break;
        }
        count++;
        long long int n=5;
        while(((n*(n-3))/2)<d){
            n++;
        }
        cout<<"Case "<<count<<": "<<n<<endl;
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

 main()
{
    long long int d,count=0;
    while(cin>>d){
        if(d==0){
            break;
        }
        count++;
        long long int n=5;
        while((((n*(n-1))/2)-n)<d){
            n++;
        }
        cout<<"Case "<<count<<": "<<n<<endl;
    }
    return 0;
}
*/
