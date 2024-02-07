/*
Write a C code to display the multiplication table of a given integer by the userl.
*/

#include <stdio.h>
int main()
{
    int num;
    printf("enter a num to get the multiplication table of the num: ");
    scanf("%d",&num);
    for(int i = 1 ; i <= 12 ; i++)
    {
        printf("%d x %d = %d \n",i,num,num*i);
    }
}