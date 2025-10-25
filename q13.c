// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

void main(){
    printf("ENTER year");
    int a;
    scanf("%d",&a);

    if (a%4==0&&a%100!=0||a%400==0)
    {
        printf("NUMBER IS A LEAP YEAR");
    }

    else {
        printf("NUMBER IS A NORMAL");

    }

}