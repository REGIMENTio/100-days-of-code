//Write a program to check if a number is an Armstrong number.

#include<stdio.h>
#include<math.h>
void main(){
    int num=0,val,val1,rem=0,n=0, sum=0;
    printf("Enter digit");
    scanf("%d",&num);

    val=num;
    val1=num;

    while(num>0){
    
        num = num/10;
        n++;
    }


    while(val1>0){
       rem = val1%10;
       sum = sum + (int)pow(rem,n);
       val1 = val1/10;
    }
    printf("%d\n",sum);
  
    if(sum==val){
        printf("NUM IS armstrong");
    }
    else {
        printf("Num is not armstrong");
    }
}