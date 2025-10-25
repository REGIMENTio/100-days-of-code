// Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>

void main(){
    int a,b,c,d;
    printf("1st num");
    scanf("%d",&a);

    printf("2nd num");
    scanf("%d",&b);

    printf("Your HCF = ");

    c=a;
    d=b;

    if(a>b){
        for(d;d!=0;d--){
            if(a%d==0&&b%d==0){
                printf("%d",d);
                break;
            }
        }
    }

    else if (b>a){
        for(c;c!=0;c--){
            if(b%c==0&&a%c==0){
                printf("%d",c);
                break;
            }
        }
    }

    else {
        for(c;c!=0;c--){
            if(b%c==0&&a%c==0){
                printf("%d",c);
                break;
            }
        }
    }
    
}