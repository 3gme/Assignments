/*
Write a C code to calculate employee salary in a week based on his working hours, hour
rate is 50.
The program will ask the user to enter the working hours, then it will print his salary.
But if the working hours are less than 40 hours, a 10% deduction will be applied.
*/
#include <stdio.h>
int main()
{
    printf("enter the number of hours you worked this week: ");
    float hours;
    scanf("%f",&hours);
    float salary = hours*50;
    if(hours<40)salary *=0.90;
    printf("the salaru is: %.3f \n",salary);
}