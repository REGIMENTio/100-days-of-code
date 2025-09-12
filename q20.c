// Write a program to display the day of the week based on a number (1–7) using switch-

#include <stdio.h>

void main()
{

    int a;
    printf("Enter your input ");
    scanf("%d",&a);

    switch (a){
      case (1):
    {
        printf("MONDAY");
        break;
    }

     case (2):
    {
        printf("Tuesday");
        break;
    }
    case (3):
    {
        printf("WednesdaY");
        break;
    }
    case (4):
    {
        printf("THursdaY");
        break;
    }

    case (5):
    {
        printf("Friday");
        break;
    }
    case (6):
    {
        printf("Saturday");
        break;
    }
    case (7):
    {
        printf("Sunday");
        break;
    }

    }
}

