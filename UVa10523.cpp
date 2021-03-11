/* Very easy */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,a;
    while(cin>>n>>a){
        long long i,total=0;
        for(i=1; i<=n; i++){
            total = total + i*(pow(a,i));
        }
        cout<<total<<endl;
    }
    return 0;
}
