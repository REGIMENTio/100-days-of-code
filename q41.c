// Write a program to swap the first and last digit of a number.

#include<stdio.h>
int main(){
    int a,b,c,d,e,num;
    printf("Enter number to be switched");
    scanf("%d",&a);
    
    b=a%10;
    num=a;

    d=1;
    if (a<10){
        printf("swapped num = %d\n",a);
    }
    else {
    while(a>9){
       c = a/10;
       a=a/10;
       d=d*10;
    }

 
    e=d*b+c*1+num-d*c-b;
    printf("this is first digit %d\n this is last digit %d\nthis is the swapped number %d\n",c,b,e); 
    


}
}