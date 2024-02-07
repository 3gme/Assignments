/*
Write C code to read 10 numbers from the user and find their summation and average.
*/
#include <stdio.h>
int main()
{
    printf("enter 10 nums to get the sum and the avarage\n");
    float num,sum =0;
    for(int i =0 ; i< 10 ;i++)
    {
        scanf("%f",&num);
        sum += num;
    }
    printf("the avarage is: %0.2f \nthe sum is: %0.2f",sum/10,sum);
}