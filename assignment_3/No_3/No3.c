/*
03.
Write a C code that gets the number of the digits in a given number.
*/

#include <stdio.h>

int digit_count(int a)
{
    int count =1 ;      
    //initializing count =1 as the least number of digits in any number is 1 even the 0;
    while (a/10!=0)
    {
        count++;
        a/=10;
    }
    return count;
}

int main()
{
    printf("enter a number to get the count of digits:");
    int num ;
    int count;
    scanf("%d",&num);
    count = digit_count(num);
    printf("the number of digits in %d is:%d",num,count);

}
