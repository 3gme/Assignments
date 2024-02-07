/*
Write a C code that asks the user to enter a number and check if it is an Even or Odd.
*/
#include <stdio.h>
int main()
{
    printf("enter a number to check if the number is odd or even: ");
    int num ;
    scanf("%d",&num);
    if(num%2 == 0) printf("the number is even \n");
    else printf("the number is odd \n");    
}