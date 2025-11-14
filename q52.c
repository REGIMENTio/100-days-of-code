/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

void main(){
    int i, j;

    // upper half
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }
        printf("\n");
    }

    // lower half
    for(i = 4; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("*\n");
        }
        printf("\n");
    }
}