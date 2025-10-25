// Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled.

#include <stdio.h>

void main()
{
    printf("Enter the days");
    int a, fine, day;
    scanf("%d", &a);

    fine = 0;
    day = 1;
    for (a; day <= a; day++)
    {

        if (day <= 5)
        {
            fine = fine + 2;
        }

        else if (day > 5 && day <= 10)
        {
            fine = fine + 4;
        }

        else if (day > 10 && day <= 30)
        {
            fine = fine + 6;
        }

        else
            printf("Membership Cancelled");
    }

    if (a < 31)
    {
        printf("total fine to be paid %d", fine);
    }
}