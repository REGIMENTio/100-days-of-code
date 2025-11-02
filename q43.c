// Q43: Write a program to check if a number is a strong number.

// /*
// Sample Test Cases:
// Input 1:
// 145
// Output 1:
// Strong number

// Input 2:
// 123
// Output 2:
// Not strong number

// */

long fact(int n) {
    if (n <= 1) {
        return 1;
    } 
    else {
    
        return n * fact(n - 1); 
    }
}

#include <stdio.h>
void main(){
    int a,b,c,d,e;
    printf("\tEnter number to be checked=\t\n");
    scanf("%d",&a);
    b=a;
    d=0;
    

    while(a>=1){
        c=a%10;
        a=a/10;

        

        d = d + fact (c);

        printf("%d\n%d\n%d\n",c,a,d);

    }

    if (d==b)
    printf("Number is strong");
    else
    printf("not strong");
}