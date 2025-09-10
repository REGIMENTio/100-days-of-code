#include<stdio.h>
#include<math.h>
void main(){
    float t,sp,p,rate,n;
    n=12;
    double ph;

     
    float comp,si;

    printf("enter amount\n");
    scanf("%f",&p);
    printf("enter time in months\n");
    scanf("%f",&t);
    printf("enter interest rate\n");
    scanf("%f",&rate);

    ph=pow(1+rate/(100*n),n*t);
    
    comp=p*ph;

    si=p+(p*rate*t)/100;

    printf("COMPOUND INTEREST :%.2f\n",comp);
    printf("SIMPLE INTEREST :%.2f\n",si);
   




    
    
}