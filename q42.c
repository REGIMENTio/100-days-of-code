// Q42: Write a program to check if a number is a perfect number.

// /*
// Sample Test Cases:
// Input 1:
// 6
// Output 1:
// Perfect number

// Input 2:
// 10
// Output 2:
// Not perfect number

// */


#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter number to be checked ");
    scanf("%d",&a);
    b=a;
    d=0;

    for(c=1;c<a;c++){

        if(a%c==0){
           d=d+c;
        
           
           
        }

    }

    if (d==b){
        printf("This number is perfect");
        
    }
    else {
        printf("This number is not perfect");
        
    }
}