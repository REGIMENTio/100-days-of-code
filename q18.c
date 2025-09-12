// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// below 60: Grade F.


#include<stdio.h>\

void main(){


int p;
printf("Enter Percentage = ");
scanf("%d",&p);

if (p>=90&&100>=p){
    printf("Grade A");
}
else if (p>=80)
{
  printf("Grade B");
}
else if (p>=70){
    printf("Grade c");
}
else if (p>=60){
    printf("Grade D");
}
else if (p<60){
    printf("Grade f");
}

}


