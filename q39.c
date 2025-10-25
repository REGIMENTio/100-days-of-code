//Q39: Write a program to find the product of odd digits of a number.

#include<stdio.h>

void main(){
    int a,b,c,d;

    printf("Enter number\n");
    scanf("%d",&a);


    b=a;
    c=0;

    while(a>0){
        d=a%10;
        
        printf("value of d is = %d\n",d);
        if(a%2==0||a==1){
                 a=a/10;
                 continue;
        }
        c=c+d;
    

        a=a/10;
        
        printf("value of a is =%d\n",a);
        
    }
    printf("Sum of odd digits of this num are = %d",c);


}