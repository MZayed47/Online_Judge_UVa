/* Primary Arithmetic */
#include<iostream>
using namespace std;

int main()
{
    long int n1,n2;

    while(cin>>n1>>n2){
        if(n1==0 && n2==0){
            break;
        }
        int rem1,rem2,temp=0,count=0;
        while(n1!=0 || n2!=0){
            rem1 = n1%10;
            n1 = n1/10;
            rem2 = n2%10;
            n2 = n2/10;
            temp = (rem1+rem2+temp)/10;
            count = count + temp;
        }
        if(count==0){
            cout<<"No carry operation."<<endl;
        }
        else if(count==1){
            cout<<count<<" carry operation."<<endl;
        }
        else{
            cout<<count<<" carry operations."<<endl;
        }
    }
    return 0;
}
