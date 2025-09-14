// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
#include <math.h>

int bin(int a)
{
    int c, b, n;
    n = 0;
    for (n; a > pow(2, n + 1); n++)
    {
        b = pow(2, n);
    }

    printf("1");

    b = pow(2, n);

    c = a - b;
    if (c != 0 && c<b)
    {
        bin(c);
        printf("0");
    }
   

    return n;
}

void main()
{
    printf("Input=");

    int a, b;
    scanf("%d", &a);
    bin(a);
}
