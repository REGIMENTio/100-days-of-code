// Write a program to display the month name and number of days using switch-case for a given month number.// Write a program to display the day of the week based on a number (1–7) using switch-

#include <stdio.h>

void main()
{

    int a;
    printf("Enter your input ");
    scanf("%d",&a);

    switch (a){
      case (1):
    {
        printf("January");
        break;
    }

     case (2):
    {
        printf("February");
        break;
    }
    case (3):
    {
        printf("march");
        break;
    }
    case (4):
    {
        printf("April");
        break;
    }

    case (5):
    {
        printf("May");
        break;
    }
    case (6):
    {
        printf("June");
        break;
    }
    case (7):
    {
        printf("July");
        break;
    }   
    case (8):
    {
        printf("August");
        break;
    }   
    case (9):
    {
        printf("Semptember");
        break;
    }   
    case (10):
    {
        printf("October");
        break;
    }   
    case (11):
    {
        printf("November");
        break;
    }   
    case (12):
    {
        printf("December");
        break;
    }

    }
}

