/*
Write a C to calculate the factorial of an integer entered by the user using a while loop.
*/

#include <stdio.h>
int main()
{
    printf("enter a number to get the factorial: ");
    int num ;
    scanf("%d",&num);
    int Num = num;
    int result = 1;
    while(num!=0)
    {
        result *= num;
        num--;
    }
    printf("The factorial of %d is: %d ",Num,result);
}