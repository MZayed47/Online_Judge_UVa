#include<stdio.h>
int main()
{
    int x;

    while(scanf("%d",&x)!=EOF){
        if(x>=2000){
            if((x%4==0 && x%100!=0) || x%400==0){
                printf("This is leap year.\n");
                if(x%15==0){
                    printf("This is huluculu festival year.\n");
                }
                if(x%55==0){
                    printf("This is bulukulu festival year.\n");
                }
                printf("\n");
            }
            else{
                if(x%15==0){
                    printf("This is huluculu festival year.\n");
                }
                else{
                    printf("This is an ordinary year.\n");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
