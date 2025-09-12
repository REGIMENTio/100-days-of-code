// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
 void main(){
    float a,b,c,D,d,root1,root2;
    printf("Enter coefficient of x^2 : \n");
    scanf("%f",&a);
    printf("Enter coefficient of x : \n");
    scanf("%f",&b);
    printf("Enter coefficient of constant : \n");
    scanf("%f",&c);


    D = (b*b-4*a*c);
    d = pow(b*b-4*a*c,0.5);


    
    root1 = ((-b+d)/(2*a));
    root2 = ((-b-d)/(2*a));


    if (D == 0){
        printf("both roots are equal.\n");
        printf("%f\n",root1);
        printf("%f\n",root2);


    }
    else if (D>0){
        printf("both roots are unique and exist\n");
    }
    else if (D<0){
        printf("both roots are imaginary\n");
    }




    

    
 }