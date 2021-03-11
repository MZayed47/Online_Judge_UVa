/* The Coco-cola Store */
#include<stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)==1){
        if(x==0){
            break;
        }
        int a,b,cola=0,c=x;
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
