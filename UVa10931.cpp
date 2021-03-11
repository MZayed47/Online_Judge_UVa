/* Parity */
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }

        int x,y,m[100],i=0,j=0;

        while(n!=0){
            x = n/2;
            y = n%2;
            n = x;
            m[i] = y;
            i++;
        }
        cout<<"The parity of ";
        for(j=i-1; j>=0; j--){
            cout<<m[j];
        }

        int count=0;
        for(j=i-1; j>=0; j--){
            if(m[j]==1){
                count++;
            }
        }
        cout<<" is "<<count<<" (mod 2)."<<endl;
    }
    return 0;
}
