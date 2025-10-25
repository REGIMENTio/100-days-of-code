// Write a program to find the LCM of two numbers.

#include<stdio.h>

void main(){
    int a,b,c,d;

    printf("1st num");
    scanf("%d",&a);

    printf("2nd num");
    scanf("%d",&b);

    if(a>b){
        c=a;
        while(c%a!=0 || c%b!=0){
            
            c++;

        }
        printf("The LCM is %d",c);
    }

    else if (b>a){
        d=b;
        while(d%a!=0 || d%b!=0){
            
            d++;

        }
        printf("The LCM is %d",d);
    }

    else if (a==b){
        printf("THE LCM IS %d",a);
    }



}
//if a>b c=a and divide c%a==0&&c%b==0
