// Write a program to find profit or loss percentage given cost price and selling price

#include<stdio.h>

void main(){

    int a;
    printf("ENter cost price");
    scanf("%d",&a);

    printf("Enter sell price");
    int b,loss,profit;
    scanf("%d",&b);

    if((a-b)==0){

        printf("this is sold at 0 profit and 0 loss");
    }

    if((a-b)>0){

        printf("sold at loss of %d and loss percent = %d %%",b-a,((b-a)*100/a));

    }
    else if((a-b)<0){

        printf("sold at profit of %d and profit percent = %d %%",b-a,((b-a)*100/a));

    }
}

