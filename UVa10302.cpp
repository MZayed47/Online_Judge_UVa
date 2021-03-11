/* Summation of polynomial */
#include<iostream>
using namespace std;

int main()
{
    long long n;
    while(cin>>n){
        long long y;
        y = ((n*(n+1))/2)*((n*(n+1))/2);
        cout<<y<<endl;
    }
    return 0;
}
