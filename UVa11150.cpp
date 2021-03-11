/* Cola */
#include<stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)==1){
        int a,b,cola=x,c=x;
        while(c>=3){
            a=c/3;
            b=c%3;
            c=a+b;
            cola=cola+a;
        }
        if(c==2){
            cola++;
        }
        printf("%d\n",cola);
    }
    return 0;
}
