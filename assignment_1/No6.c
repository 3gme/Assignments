/*
06.
Write a code that takes 2 numbers and print the arithmetical, logical and bitwise
operations.
*/

#include <stdio.h>
int main()
{
    printf("enter 2 nums (x),(y) \n");
    int x , y ;
    scanf("%d %d",&x ,&y);
    printf("the arithmetical operation \n");
    printf("x * y = %d \n", x*y);
    float res = (float)x / (float)y ;
    printf("x / y = %.2f \n",res);
    printf("x + y = %d \n", x+y);
    printf("x - y = %d \n", x-y);
    printf("the logical operators \n");
    printf("x && y = %d \n", x&&y);
    printf("x || y = %d \n", x||y);
    printf("the bitwise operators \n");
    printf("x|y = %d \n",x|y);
    printf("x&y = %d \n",x&y);
    printf("x^y = %d \n",x^y);
    printf("x<<y = %d \n",x<<y);
    printf("x>>y = %d \n",x>>y);



    
    return 0;
}