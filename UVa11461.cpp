/* Square Numbers */
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b){
        int count=0;
        if(a==0 && b==0){
            break;
        }
        for(int i=a; i<=b; i++){
            c = sqrt(i);
            if(c*c==i){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

/*#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
        int count=0;
        if(a==0 && b==0){
            break;
        }
            if(b>a){
                for(int i=1; i<=b; i++){
                    if((i*i)<=b && (i*i)>=a)
                        count++;
                }
            }
            if(a>b){
                for(int i=1; i<=a; i++){
                    if((i*i)<=a && (i*i)>=b)
                        count++;
                }
            }
        cout<<count<<endl;
    }
    return 0;
}
*/
