/* Let Me Count The Ways */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long v,p,n,d,q,h,count;
    while(cin>>v){
        count=0;
        for(p=0; p<=v; p++){
            for(n=0; n<=v/5; n++){
                for(d=0; d<=v/10; d++){
                    for(q=0; q<=v/25; q++){
                        for(h=0; h<=v/50; h++){
                            if((p+n*5+d*10+q*25+h*50)==v){
                                count++;
                                //cout<<p<<" "<<n<<" "<<d<<" "<<q<<" "<<h<<" "<<endl<<count<<endl;
                            }
                        }
                        if((p+n*5+d*10+q*25+h*50)==v){
                            count++;
                            //cout<<p<<" "<<n<<" "<<d<<" "<<q<<" "<<h<<" "<<endl<<count<<endl;
                        }
                    }
                    if((p+n*5+d*10+q*25+h*50)==v){
                        count++;
                        //cout<<p<<" "<<n<<" "<<d<<" "<<q<<" "<<h<<" "<<endl<<count<<endl;
                    }
                }
                if((p+n*5+d*10+q*25+h*50)==v){
                    count++;
                    //cout<<p<<" "<<n<<" "<<d<<" "<<q<<" "<<h<<" "<<endl<<count<<endl;
                }
            }
            if((p+n*5+d*10+q*25+h*50)==v){
                count++;
                //cout<<p<<" "<<n<<" "<<d<<" "<<q<<" "<<h<<" "<<endl<<count<<endl;
            }
        }
        if(count==1){
            cout<<"There is only 1 way to produce "<<v<<" cents change."<<endl;
        }
        else{
            cout<<"There are "<<count<<" ways to produce "<<v<<" cents change."<<endl;
        }
    }
    return 0;
}
