// Write a program to input a character and check whether it is a vowel or consonant using if else

#include <stdio.h>
void main()
{

    char c;
    
    printf("Enter vowel :");
    scanf(" %c", &c);
    int ascii = (int)c;

    if (ascii >= 65 && ascii <= 122){
    printf("Character is a alphabet\n");
    

        if ( ascii==65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117)
        {
            printf("charater is a vowel\n");
        }
        else 
            {
            printf("Its a consonant\n");
            }
        
        }

    else 
    {
        printf("Character is not a alphabet\n");
    }

    
}
