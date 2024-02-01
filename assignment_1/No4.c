/*
04.
Solve these examples in a paper and confirm that your answers are correct by writing a
code printing the result. (x = 7, y = 4), (x | y), (x & y), (x ^ y), (x << 1), (x >> 2).
*/

#include <stdio.h>
int main()
{
    int x = 7 , y = 4 ;
    printf("x|y = %d \n",x|y);
    printf("x&y = %d \n",x&y);
    printf("x^y = %d \n",x^y);
    printf("x<<y = %d \n",x<<y);
    printf("x>>y = %d \n",x>>y);
    return 0;
}