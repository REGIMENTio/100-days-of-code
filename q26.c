// Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/


#include<stdio.h>

void main(){

    printf("Enter number =\n");
    int a,i;
    scanf("%d",&a);
    i=0;
    for(i;i<=a;i++)
    {
    printf("%d\t",i);
    }
}

