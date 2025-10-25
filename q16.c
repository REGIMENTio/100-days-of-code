// Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

void main(){
    int a,b,c;

    printf("Enter number = \n");
    scanf("%d",&a);
    printf("Enter number = \n");
    scanf("%d",&b);
    printf("Enter number = \n");
    scanf("%d",&c);

    if (a>b&&a>c){
        printf("a is greatest");
        
    }
    else if (b>c&&b>a){
        printf("b is greatest");
        
    }
    else if (c>a&&c>b){
        printf("c is greatest");
    
        
    }

    else {
        printf("2 or more numbers are equal");
    }
}