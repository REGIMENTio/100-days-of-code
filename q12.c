// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else

#include<stdio.h>

void main(){
    int a;

    printf("PRINT YOUR INTEGER");
    scanf("%d",&a);
 

    if (a>0){
        printf("NUM IS POSITIVE");


    }
 
    else if (a<0){
        printf("NUM IS NEGATIVE");

    }

    else{
        printf("NUM is 0");
        
    }
}