// #Write a program to calculate the factorial of a number.

#include<stdio.h>

void main(){
    int a,i,fact;
    printf("Enter integer:");
    scanf("%d",&i);
    
    a=1;
    fact=1;

    for(i;i>=a;a++){

        fact=fact*a;


}
printf("factorial=%d",fact);
}