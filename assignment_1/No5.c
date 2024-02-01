/*
05.
Write a code that scans 3 numbers from the user and prints them in reversed order.
*/
#include <stdio.h>
int main ()
{
    int N1,N2,N3;
    printf("enter 3 integer nums to get them in reversed order \n");
    scanf("%d %d %d",&N1 ,&N2 ,&N3);
    printf("the reversed order is : %d %d %d \n" ,N3 ,N2 ,N1);

    return 0;
}