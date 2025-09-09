// Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
void main(){
    float r,area,circum;
    printf("RADIUS=\n");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;

    printf("AREA =%.2f\n",area);
    printf("CIRCUMFERENCE =%.2f\n",circum);


}
