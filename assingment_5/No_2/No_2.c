/*
02.
Write a C code that asks the user to enter 2 values and save them in two variables, then
the program sends these variables by address to a function that returns the summation
of them. The program then prints the result.
*/

#include <stdio.h>

float summation(float *ptr1, float *ptr2)
{
    return (*ptr1 + *ptr2);
}

int main()
{
    printf("Enter two values to get the summantion: ");
    float num1,num2;
    scanf("%f %f",&num1 ,&num2);
    printf("the summation is: %0.3f",summation(&num1,&num2));
}