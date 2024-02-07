/*
Write a C code that asks the user to enter 3 numbers, the program will print the
maximum number of them.
*/
#include <stdio.h>
int main()
{
    float a, b, c ,maximum = 0;
    printf("enter three nums to get the maximum \n");
    scanf("%f %f %f",&a ,&b ,&c);
    if(a==b||b==c||a==c) 
    {
        printf("two number are the same");
    }
    else
    {
    maximum = (a>b) ? ( (a>c)? a : c ) : ( (b>c)? b : c );
    }
    printf("%.4f is the maximum number \n",maximum);
}