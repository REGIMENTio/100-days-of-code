//Write a program to swap two numbers using a third variable.

#include<stdio.h>
void main (){
    int a,b,c;
    printf("ENTER NUMBER 1\n");
    scanf("%d",&a);
    printf("ENTER NUMBER 2\n");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    

    printf("A=%d\n",a);
    printf("B=%d",b);

    
    
}