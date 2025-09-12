// Write a program to calculate electricity bill based on units consumed with these rates:
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// // Above at ₹12/unit

#include <stdio.h>
void main()
{
    int a, bill, i;

    printf("Enter Units consumed");

    scanf("%d", &a);
    bill = 0;

    for (i = 1; i <= a; i++)

    {
        if (i <= 100)
        {

            bill += 5;
        }

        else if (i <= 200)
        {
            bill += 7;
        }
        else if (i <= 300)
        {
            bill += 10;
        }
        else
        {
            bill += 12;
        }
    }
    printf("BILL=%d",bill);
}