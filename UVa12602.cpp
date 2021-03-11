/* Nice License Plates */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        long long v;
        double temp=0;
        cin>>str;

        for(long long i=0; i<=2; i++){
            if(str[i]=='A'){
                v = 0;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='B'){
                v = 1;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='C'){
                v = 2;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='D'){
                v = 3;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='E'){
                v = 4;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='F'){
                v = 5;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='G'){
                v = 6;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='H'){
                v = 7;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='I'){
                v = 8;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='J'){
                v = 9;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='K'){
                v = 10;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='L'){
                v = 11;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='M'){
                v = 12;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='N'){
                v = 13;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='O'){
                v = 14;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='P'){
                v = 15;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='Q'){
                v = 16;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='R'){
                v = 17;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='S'){
                v = 18;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='T'){
                v = 19;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='U'){
                v = 20;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='V'){
                v = 21;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='W'){
                v = 22;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='X'){
                v = 23;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='Y'){
                v = 24;
                temp = temp + v*pow(26,2-i);
            }
            else if(str[i]=='Z'){
                v = 25;
                temp = temp + v*pow(26,2-i);
            }
        }
        //cout<<"temp: "<<temp<<endl;

        long long l,j,d,n=0;
        l = str.length();
        for(j=4; j<l; j++){
            d = str[j] - '\0' - 48;
            n = n*10 + d;
        }
        //cout<<"number :"<<n<<endl;

        if(abs(temp-n)>100){
            cout<<"not nice"<<endl;
        }
        else{
            cout<<"nice"<<endl;
        }
    }
    return 0;
}
