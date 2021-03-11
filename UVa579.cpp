/* Clock Hand */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float h,m;
    char c;
    while(cin>>h>>c>>m){
        if(h==0 && m==0){
            break;
        }
        float x,y;
        x = (h*5*float(6)) - (m*float(6)) + (m/float(2));

        y = abs(x);

        if(y>180){
            printf("%.3f\n",360-y);
        }
        else{
            printf("%.3f\n",y);
        }
    }
    return 0;
}
