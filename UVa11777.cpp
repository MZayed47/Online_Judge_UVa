#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        count++;
        int t1,t2,f,a,c1,c2,c3,avg;
        cin>>t1>>t2>>f>>a>>c1>>c2>>c3;
        int total;
        if(c1<=c2 && c1<=c3){
            avg=(c2+c3)/2;
        }
        else if(c2<=c1 && c2<=c3){
            avg=(c1+c3)/2;
        }
        else if(c3<=c1 && c3<=c2){
            avg=(c1+c2)/2;
        }
        total = t1+t2+f+a+avg;
        if(total>=90){
            cout<<"Case "<<count<<": A"<<endl;
        }
        if(total>=80 && total<90){
            cout<<"Case "<<count<<": B"<<endl;
        }
        if(total>=70 && total<80){
            cout<<"Case "<<count<<": C"<<endl;
        }
        if(total>=60 && total<70){
            cout<<"Case "<<count<<": D"<<endl;
        }
        if(total<60){
            cout<<"Case "<<count<<": F"<<endl;
        }
    }
    return 0;
}
