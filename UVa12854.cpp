/* Automated checking machine */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j){
        if(a==f || b==g || c==h || d==i || e==j){
            cout<<"N"<<endl;
        }
        else{
            cout<<"Y"<<endl;
        }
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
repeat:
    int a[5],b[5];
    for(int j=0; j<5; j++){
        cin>>a[j];
    }
    for(int k=0; k<5; k++){
        cin>>b[k];
    }
    for(int l=0; l<5; l++){
        if(a[l]==b[l]){
            cout<<"N"<<endl;
            goto repeat;
        }
        if(l==4){
            cout<<"Y"<<endl;
            goto repeat;
        }
    }
    return 0;
}
*/
