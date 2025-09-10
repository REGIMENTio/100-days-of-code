// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
void main(){

    int i;
    printf("ENTER YOUR INTEGER");
    scanf("%d",&i);

    if (i%2==0){
        printf("INTEGER IS EVEN");

    }
    else{
        printf("NUmber is  odd ");
    }
}