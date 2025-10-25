// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
#include <math.h>

int bin(int a)
{
    int c, b, n, i,o;
   
    for (n = 0, i = 0; a >=pow(2, n); i++)
    {
        b = pow(2, n);
        n=o;


        for(o;a>=pow(2,n);o--){
            if (a>=pow(2,o)){
                printf("1");
                a=a-pow(2,o);
            }
            else {
                printf("0");
            }
        }   

    }

  
}

void main()
{
    printf("Input=");

    int a, b;
    scanf("%d", &a);
    bin(a);
}
