/* Summing Digits */
#include<iostream>
using namespace std;

int main()
{
    long long n;

    while(cin>>n){
        if(n==0){
            break;
        }
        long long rem,temp;
        while(n>9){
            temp = 0;
            while(n!=0){
                rem = n%10;
                n = n/10;
                temp = temp + rem;
            }
            n = temp;
        }
        if(n<=9){
            temp = n;
        }
        cout<<temp<<endl;
    }
    return 0;
}
