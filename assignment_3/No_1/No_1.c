/*
01.
Write a C code to ask the user to enter two numbers, then the main function will call a
function named Get_Max that takes the two values entered by the user then returns the
maximum of them.
The main function will print the returned value.
*/

#include <stdio.h>

/* i used the char parameter to check if the numbers are equals and didn't a number in return 
   as it could be one of the entered two nums. */
int Get_Max(float,float,char*);


int main()
{
    printf("enter two nums to get the maximum \n");
    float a,b;
    scanf("%f %f",&a,&b);
    char c = ' ';
    float max = Get_Max(a,b,&c);
    if(' '==c) printf ("the maximum number is: %0.4f",max);
    else printf("the two nums are equal\n");
}

//change the value of char c if the nums are equal
int Get_Max(float a,float b,char*c)
{
    int max;
    if(a==b) *c ='=';
    else
        max = (a>b)?a:b;
    return max; 
}