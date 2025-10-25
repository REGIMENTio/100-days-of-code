// Q38: Write a program to find the sum of digits of a number.



#include<stdio.h>

void main(){

    
    

    int a,b,i,n;

    printf("enter num ");
    scanf("%d",&a);
    b=a;
    n=0;

    while(a>=10){
        i=a%10;
        n=n+i;
        a=a/10;   
        
    }
    printf("Last digit is %d",i);
}