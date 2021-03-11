/* How old are you? */
#include<iostream>
using namespace std;

int main()
{
    int t,dc,db,mc,mb,yc,yb,count=0,age;
    char c;
    cin>>t;
    while(t--){
        count++;

        cin>>dc>>c>>mc>>c>>yc;
        cin>>db>>c>>mb>>c>>yb;

        age = yc-yb;

        if(mc<mb){
            age--;
        }
        else if(mc==mb){
            if(dc<db){
                age--;
            }
        }
        if(age<0){
            cout<<"Case #"<<count<<": Invalid birth date"<<endl;
        }
        else if(age>130){
            cout<<"Case #"<<count<<": Check birth date"<<endl;
        }
        else{
            cout<<"Case #"<<count<<": "<<age<<endl;
        }
    }
    return 0;
}
