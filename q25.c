// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
void main()
{

    int a, b, add, sub, mul, div, rem, k;

    printf("Welcome to Calculator  Enter number 1 =\n");

    scanf("%d", &a);

    printf("Enter number 2 =\n");

    scanf("%d", &b);

    printf("Operation you want to use : (use only 1 for positive , 2 for substraction and 3 for multiplication,4 for division i.e the quotient and 5 for the remainder in the same process\n");
    scanf("%d", &k); // WORKING// was using %f for char , such rookie mistakes i used to make

    switch (k)
    {

    case (1):
    {
        printf("%d", a + b);
    }

    case (2):
    {
        printf("%d", a - b);
    }

    case (3):
    {
        printf("%d", a * b);
    }
    case (4):
    {
        printf("%d", a / b);
    }
    case (5):
    {
        printf("%d", a % b);
    }
    }
}
