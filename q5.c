//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
void main(){

    float c,f;

    printf("Temperature in Celcius=");
    scanf("%f",&c);
    f=(c*(9/5)+32);
    printf("%.2f",f);

}