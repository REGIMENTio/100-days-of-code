//Write a program to swap two numbers without using a third variable.

#include <stdio.h>
void main(){
    int a,b;
    printf("ENTER 1=");
    scanf("%d",&a);
    printf("ENTER 2=");
    scanf("%d",&b);

    a=a^b;
   
    b=b^a;
     a=a^b;


    printf("%d %d",a,b);
    

}