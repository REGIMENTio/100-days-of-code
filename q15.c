// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

void main (){
    char c;
    printf("Enter character");
    scanf(" %c",&c);

    int ascii=(int)c;

    if (ascii >= 65 && ascii<91 ){

        printf("The character is a alphabet with uppercase ");

    }

    else if (ascii >= 97&&ascii<123){
        printf("Characters are lowercase");
    }  

    else if (ascii >= 48&&ascii<58){
        printf("Characters are numbers");
    }
    else if (ascii >= 97&&ascii<123){
        printf("Characters are lowercase");
    }

    else if (ascii >= 32&&ascii<48||ascii>=58&&ascii<65||ascii>=91&&ascii<95||ascii>=123&&ascii<127){
        printf("Characters are special");
    }

    
}