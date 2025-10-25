// Write a program to reverse a given number.
#include<stdio.h>
void main(){

    int num=0,val,rev=0,n=0;
    printf("Enter digit");
    scanf("%d",&val);

    num=val;

    while(num>0){

        n = num%10;
        rev = rev*10 + n;
        num = num/10;
        
    }

    printf("Your Number is %d",rev);
    
    
   
}