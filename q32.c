// Write a program to check if a number is a palindrome.



#include<stdio.h>

void main(){
    int n=0,num,temp,rev,rem;

    printf("Enter num to be checked as palindrome");
    scanf("%d",&num);
    temp=num;

    while(num>0){

        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }

    if (rev==rem){
        printf("num is palindrome");
    }
    (rev!=rem){
        printf("num is not palindrome");
    }
    
}
