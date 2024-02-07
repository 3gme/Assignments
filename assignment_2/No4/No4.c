/*
Write a C code that asks the user to enter his grade and the program will print his rating.
(Excellent, very good,...,etc). %-based system
*/
#include <stdio.h>
int main()
{
    printf("enter your grade to get the rate: ");
    float grade ;
    scanf("%f",&grade);
    printf("the grade is: ");
    if(grade>=85) printf("Excellent\n");
    else if(grade >= 75) printf("Very good\n");
    else if(grade >= 65) printf("Good\n");
    else if(grade >= 50) printf("Passing\n");
    else printf("Failled\n");

}