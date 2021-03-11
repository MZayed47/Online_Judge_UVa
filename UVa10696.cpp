#include<iostream>
using namespace std;

int f91(long long x)
{
    if(x>100){
        return x-10;
    }
    if(x<=100){

        return 91;
    }
}

int main()
{
    long long n,a;
    while(cin>>n){
        if(n==0){
            break;
        }
        a = f91(n);
        cout<<"f91("<<n<<") = "<<a<<endl;
    }
    return 0;
}
