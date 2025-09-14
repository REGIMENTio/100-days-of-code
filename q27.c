// Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
void main(){
    int a,n,i,sum;

    printf("Enter nth term");
    scanf("%d",&n);


    a=2*n-1;
    sum=0;

    for(i=1;i<=a;i+=2){

        sum=sum+i;
    }

    printf("%d",sum);

}

