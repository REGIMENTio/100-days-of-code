// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
void main()
{
    int a;
    float b,c,d,e,f;
    printf("ENTER NUMBER 1:");
    scanf("%d", &a);
    printf("ENTER NUMBER 2:");
    scanf("%f", &b);

    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;

    printf("SUM=%.2f", c);
    printf("SUBTRACTION=%.2f", d);

    printf("MULTIPLY=%.2f", e);
    printf("DIVIDE=%.2f", f);
}