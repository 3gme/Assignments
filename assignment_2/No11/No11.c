/*
Write a c code that draws a pyramid of stars with height entered by the user.
(equilateral)
*/
#include <stdio.h>
int main()
{
    printf("enter the number of the rows of the pyramid: ");
    int rows;
    scanf("%d",&rows);
    for (size_t i = 1; i <= rows; i++)
    {
        for(int k = 0 ; k < rows-i ; k++)
        {
            printf(" ");
        }
        for (int j = 2*i-1; j > 0 ; j--)
        {
        printf("*");
        }
        printf("\n");
    }
    
}