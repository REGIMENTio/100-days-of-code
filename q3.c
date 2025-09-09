// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
void main(){
    float a,b,area,p;

    printf("Enter Length=\n");
    scanf("%f",&a);
    printf("Enter Breadth=\n");
    scanf("%f",&b);

    area=a*b;
    p=2*(a+b);

    printf("Area=%.2f\n",area);
    printf("PERIMETER=%.2f",p);


}