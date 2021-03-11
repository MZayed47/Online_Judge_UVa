/* Prime Words */

#include<bits/stdc++.h>
using namespace std;

int main()
{
repeat:
    char str1[100];
    while(gets(str1)){
        int l1;
        l1 = strlen(str1);

        int c1=0;
        for(int i=0; i<l1; i++){
            if(str1[i]=='a'){
                c1 = c1 + 1;
            }
            if(str1[i]=='b'){
                c1 = c1 + 2;
            }
            if(str1[i]=='c'){
                c1 = c1 + 3;
            }
            if(str1[i]=='d'){
                c1 = c1 + 4;
            }
            if(str1[i]=='e'){
                c1 = c1 + 5;
            }
            if(str1[i]=='f'){
                c1 = c1 + 6;
            }
            if(str1[i]=='g'){
                c1 = c1 + 7;
            }
            if(str1[i]=='h'){
                c1 = c1 + 8;
            }
            if(str1[i]=='i'){
                c1 = c1 + 9;
            }
            if(str1[i]=='j'){
                c1 = c1 + 10;
            }
            if(str1[i]=='k'){
                c1 = c1 + 11;
            }
            if(str1[i]=='l'){
                c1 = c1 + 12;
            }
            if(str1[i]=='m'){
                c1 = c1 + 13;
            }
            if(str1[i]=='n'){
                c1 = c1 + 14;
            }
            if(str1[i]=='o'){
                c1 = c1 + 15;
            }
            if(str1[i]=='p'){
                c1 = c1 + 16;
            }
            if(str1[i]=='q'){
                c1 = c1 + 17;
            }
            if(str1[i]=='r'){
                c1 = c1 + 18;
            }
            if(str1[i]=='s'){
                c1 = c1 + 19;
            }
            if(str1[i]=='t'){
                c1 = c1 + 20;
            }
            if(str1[i]=='u'){
                c1 = c1 + 21;
            }
            if(str1[i]=='v'){
                c1 = c1 + 22;
            }
            if(str1[i]=='w'){
                c1 = c1 + 23;
            }
            if(str1[i]=='x'){
                c1 = c1 + 24;
            }
            if(str1[i]=='y'){
                c1 = c1 + 25;
            }
            if(str1[i]=='z'){
                c1 = c1 + 26;
            }

            if(str1[i]=='A'){
                c1 = c1 + 27;
            }
            if(str1[i]=='B'){
                c1 = c1 + 28;
            }
            if(str1[i]=='C'){
                c1 = c1 + 29;
            }
            if(str1[i]=='D'){
                c1 = c1 + 30;
            }
            if(str1[i]=='E'){
                c1 = c1 + 31;
            }
            if(str1[i]=='F'){
                c1 = c1 + 32;
            }
            if(str1[i]=='G'){
                c1 = c1 + 33;
            }
            if(str1[i]=='H'){
                c1 = c1 + 34;
            }
            if(str1[i]=='I'){
                c1 = c1 + 35;
            }
            if(str1[i]=='J'){
                c1 = c1 + 36;
            }
            if(str1[i]=='K'){
                c1 = c1 + 37;
            }
            if(str1[i]=='L'){
                c1 = c1 + 38;
            }
            if(str1[i]=='M'){
                c1 = c1 + 39;
            }
            if(str1[i]=='N'){
                c1 = c1 + 40;
            }
            if(str1[i]=='O'){
                c1 = c1 + 41;
            }
            if(str1[i]=='P'){
                c1 = c1 + 42;
            }
            if(str1[i]=='Q'){
                c1 = c1 + 43;
            }
            if(str1[i]=='R'){
                c1 = c1 + 44;
            }
            if(str1[i]=='S'){
                c1 = c1 + 45;
            }
            if(str1[i]=='T'){
                c1 = c1 + 46;
            }
            if(str1[i]=='U'){
                c1 = c1 + 47;
            }
            if(str1[i]=='V'){
                c1 = c1 + 48;
            }
            if(str1[i]=='W'){
                c1 = c1 + 49;
            }
            if(str1[i]=='X'){
                c1 = c1 + 50;
            }
            if(str1[i]=='Y'){
                c1 = c1 + 51;
            }
            if(str1[i]=='Z'){
                c1 = c1 + 52;
            }
        }
        int x = sqrt(c1);
        for(int i=2; i<=x; i++){
            if(c1%i==0){
                cout<<"It is not a prime word."<<endl;
                goto repeat;
            }
        }
        cout<<"It is a prime word."<<endl;
    }
    return 0;
}
