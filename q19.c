// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths


#include <stdio.h>
#include <math.h>
void main(){

    float a,b,c;
    float accept=0.001;

    printf("Enter side A =\n");
    scanf("%f",&a);
    printf("Enter side B =\n");
    scanf("%f",&b);
    printf("Enter side C=\n");
    scanf("%f",&c);


    if (a+b<=c||b+c<=a||c+a<=b){

        printf("TRIANGLE CANNOT EXIST !! ENTER VALID VALUES !!");
    }

    else if (a==b||b==c||a==c){

        if (fabs((a*a)+(b*b)-(c*c)<accept)||fabs((b*b)+(c*c)-(a*a)<accept)||fabs((a*a)+(c*c)-(b*b)<accept)) {

            printf("Triangle is right angled isoceles triangle");

        }

        else {

            printf("Triangle is Isoceles triangle");
        }

      
    }

    else if (a==b&&b==c&&c==a){

        printf("Triangle is equilateral");

    }

    else if (fabs((a*a)+(b*b)==(c*c))||fabs((b*b)+(c*c)==(a*a))||fabs((a*a)+(c*c)==(b*b))){

        printf("Triangle is right angle");

    }



    
    else {

        printf("Triangle is scalene");
    }


}