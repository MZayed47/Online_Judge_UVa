/* Is this the easiest Problem? */
#include<iostream>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;

    while(t--){
        count++;
        long long int x,y,z;
        cin>>x>>y>>z;
        if((x+y)>z && (y+z)>x && (z+x)>y){
            if(x==y && y==z && z==x){
                cout<<"Case "<<count<<": Equilateral"<<endl;
            }
            else if(x==y || y==z || z==x){
                cout<<"Case "<<count<<": Isosceles"<<endl;
            }
            else{
                cout<<"Case "<<count<<": Scalene"<<endl;
            }
        }
        else{
            cout<<"Case "<<count<<": Invalid"<<endl;
        }
    }
    return 0;
}
