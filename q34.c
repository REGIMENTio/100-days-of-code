#include<stdio.h>

void main(){
    printf("Enter number ");
    int a,n,i;
    scanf("%d",&a);
    n=a-1;

    for(n;n>=2;n--){

        if ((a%n)==0){
            printf("number is not prime");
            break;
        }

        else if (n==2&&(a%n)!=0){
            printf("Number is prime");

        }

        
    }

    if(a==1||a==0){
        printf("num is neither prime nor composite");
    }  
     if(a==2){
        printf("num is prime");
    }
    

}