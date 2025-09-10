// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
void main(){

    int s,m,h;
    printf("ENTER TIME IN SECS");
    scanf("%d",&s);

    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;

    printf("THE TIME IN HH:MM:SS format is  %d:%d:%d",h,m,s);
    

}