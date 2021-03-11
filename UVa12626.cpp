/* I Love Pizza */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000];
    int n;
    cin>>n;
    while(n--){
        int temp,m=0,a=0,r=0,g=0,j=0,t=0;
        cin>>str;
        int l = strlen(str);

        for(int i=0; i<l; i++){
            if(str[i]=='M'){
                m++;
            }
            if(str[i]=='A'){
                a++;
            }
            if(str[i]=='R'){
                r++;
            }
            if(str[i]=='G'){
                g++;
            }
            if(str[i]=='I'){
                j++;
            }
            if(str[i]=='T'){
                t++;
            }
        }

        if(m<1 || a<3 || r<2 || g<1 || j<1 || t<1){
            cout<<"0"<<endl;
        }
        else{
            for(int x=1; x<100; x++){
                if(m>=1*x && a>=3*x && r>=2*x && g>=1*x && j>=1*x && t>=1*x){
                    temp = x;
                }
            }
            cout<<temp<<endl;
        }
    }
    return 0;
}
