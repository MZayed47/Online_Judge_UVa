/* Love Calculator */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100],str2[100];
    while(gets(str1) && gets(str2)){
        //gets(str1);
        //gets(str2);

        int l1,l2;
        l1 = strlen(str1);
        l2 = strlen(str2);

        int c1=0,c2=0;
        for(int i=0; i<l1; i++){
            if(str1[i]=='a' || str1[i]=='A'){
                c1 = c1 + 1;
            }
            if(str1[i]=='b' || str1[i]=='B'){
                c1 = c1 + 2;
            }
            if(str1[i]=='c' || str1[i]=='C'){
                c1 = c1 + 3;
            }
            if(str1[i]=='d' || str1[i]=='D'){
                c1 = c1 + 4;
            }
            if(str1[i]=='e' || str1[i]=='E'){
                c1 = c1 + 5;
            }
            if(str1[i]=='f' || str1[i]=='F'){
                c1 = c1 + 6;
            }
            if(str1[i]=='g' || str1[i]=='G'){
                c1 = c1 + 7;
            }
            if(str1[i]=='h' || str1[i]=='H'){
                c1 = c1 + 8;
            }
            if(str1[i]=='i' || str1[i]=='I'){
                c1 = c1 + 9;
            }
            if(str1[i]=='j' || str1[i]=='J'){
                c1 = c1 + 10;
            }
            if(str1[i]=='k' || str1[i]=='K'){
                c1 = c1 + 11;
            }
            if(str1[i]=='l' || str1[i]=='L'){
                c1 = c1 + 12;
            }
            if(str1[i]=='m' || str1[i]=='M'){
                c1 = c1 + 13;
            }
            if(str1[i]=='n' || str1[i]=='N'){
                c1 = c1 + 14;
            }
            if(str1[i]=='o' || str1[i]=='O'){
                c1 = c1 + 15;
            }
            if(str1[i]=='p' || str1[i]=='P'){
                c1 = c1 + 16;
            }
            if(str1[i]=='q' || str1[i]=='Q'){
                c1 = c1 + 17;
            }
            if(str1[i]=='r' || str1[i]=='R'){
                c1 = c1 + 18;
            }
            if(str1[i]=='s' || str1[i]=='S'){
                c1 = c1 + 19;
            }
            if(str1[i]=='t' || str1[i]=='T'){
                c1 = c1 + 20;
            }
            if(str1[i]=='u' || str1[i]=='U'){
                c1 = c1 + 21;
            }
            if(str1[i]=='v' || str1[i]=='V'){
                c1 = c1 + 22;
            }
            if(str1[i]=='w' || str1[i]=='W'){
                c1 = c1 + 23;
            }
            if(str1[i]=='x' || str1[i]=='X'){
                c1 = c1 + 24;
            }
            if(str1[i]=='y' || str1[i]=='Y'){
                c1 = c1 + 25;
            }
            if(str1[i]=='z' || str1[i]=='Z'){
                c1 = c1 + 26;
            }
        }

        for(int i=0; i<l2; i++){
            if(str2[i]=='a' || str2[i]=='A'){
                c2 = c2 + 1;
            }
            if(str2[i]=='b' || str2[i]=='B'){
                c2 = c2 + 2;
            }
            if(str2[i]=='c' || str2[i]=='C'){
                c2 = c2 + 3;
            }
            if(str2[i]=='d' || str2[i]=='D'){
                c2 = c2 + 4;
            }
            if(str2[i]=='e' || str2[i]=='E'){
                c2 = c2 + 5;
            }
            if(str2[i]=='f' || str2[i]=='F'){
                c2 = c2 + 6;
            }
            if(str2[i]=='g' || str2[i]=='G'){
                c2 = c2 + 7;
            }
            if(str2[i]=='h' || str2[i]=='H'){
                c2 = c2 + 8;
            }
            if(str2[i]=='i' || str2[i]=='I'){
                c2 = c2 + 9;
            }
            if(str2[i]=='j' || str2[i]=='J'){
                c2 = c2 + 10;
            }
            if(str2[i]=='k' || str2[i]=='K'){
                c2 = c2 + 11;
            }
            if(str2[i]=='l' || str2[i]=='L'){
                c2 = c2 + 12;
            }
            if(str2[i]=='m' || str2[i]=='M'){
                c2 = c2 + 13;
            }
            if(str2[i]=='n' || str2[i]=='N'){
                c2 = c2 + 14;
            }
            if(str2[i]=='o' || str2[i]=='O'){
                c2 = c2 + 15;
            }
            if(str2[i]=='p' || str2[i]=='P'){
                c2 = c2 + 16;
            }
            if(str2[i]=='q' || str2[i]=='Q'){
                c2 = c2 + 17;
            }
            if(str2[i]=='r' || str2[i]=='R'){
                c2 = c2 + 18;
            }
            if(str2[i]=='s' || str2[i]=='S'){
                c2 = c2 + 19;
            }
            if(str2[i]=='t' || str2[i]=='T'){
                c2 = c2 + 20;
            }
            if(str2[i]=='u' || str2[i]=='U'){
                c2 = c2 + 21;
            }
            if(str2[i]=='v' || str2[i]=='V'){
                c2 = c2 + 22;
            }
            if(str2[i]=='w' || str2[i]=='W'){
                c2 = c2 + 23;
            }
            if(str2[i]=='x' || str2[i]=='X'){
                c2 = c2 + 24;
            }
            if(str2[i]=='y' || str2[i]=='Y'){
                c2 = c2 + 25;
            }
            if(str2[i]=='z' || str2[i]=='Z'){
                c2 = c2 + 26;
            }
        }

repeat1:
        int sum1=0,digit1;
        while(c1!=0){
            digit1 = c1%10;
            c1 = c1/10;
            sum1 = sum1 + digit1;
        }
        if(sum1>9){
            c1 = sum1;
            goto repeat1;
        }

repeat2:
        int sum2=0,digit2;
        while(c2!=0){
            digit2 = c2%10;
            c2 = c2/10;
            sum2 = sum2 + digit2;
        }
        if(sum2>9){
            c2 = sum2;
            goto repeat2;
        }

        if(sum1>=sum2){
            printf("%.2lf",(double(sum2)/double(sum1))*double(100));
            cout<<" %"<<endl;
        }
        if(sum2>sum1){
            printf("%.2lf",(double(sum1)/double(sum2))*double(100));
            cout<<" %"<<endl;
        }
    }
    return 0;
}
