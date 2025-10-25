// Write a program to print all factors of a given number.
#include<stdio.h>
void main(){
    int a,b,c;

    printf("eNTER NUMBER");
    scanf("%d\n",&a);
        printf("THESE ARE THE FACTORS OF THE NUMBER U CHOSE:");

    

    for(b=a;b!=0;b--){

        if (a%b==0){
            printf("%d,",b);
        }
    }printf("\n");
}