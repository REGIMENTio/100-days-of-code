// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

// /*
// Sample Test Cases:
// Input 1:
// 3
// Output 1:
// Approximate sum: 3.3

// Input 2:
// 5
// Output 2:
// Approximate sum: 4.4

// */

#include <stdio.h>

int main(){

    float a,b,c,d,e;
    
    printf("Enter element \n",a);
    scanf("%f",&a);

    c=1;
    for(b=2;b<=a;b++){
        c=c+((2*b)- 1)/(2*b);
    }

    printf("The sum of the series is %.1f",c);
    
}
