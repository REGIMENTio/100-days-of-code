// Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

void main(){

    int a,n,sum,i;
    printf("Enter the nth term");
    scanf("%d",&n);

    a=2*n;
    sum=0;


    for(i=0;i<=a;i+2){
        sum+=i;
    }

    printf("Sum=%d",sum);


}