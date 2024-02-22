/*
Write a program that reads a 5x5 array of integers and then prints the row sums and the
sum of the columns:
Ex:
Enter row 1 : 8 3 9 0 10
Enter row 2 : 3 5 17 1 1
Enter row 3 : 2 8 6 23 1
Enter row 4 : 15 7 3 2 9
Enter row 5 : 6 14 2 6 0

Row Totals : 30 27 40 36 28
Columns Totals : 34 37 37 32 21
*/

#include <stdio.h>

#define n 10

int main()
{
    int arr[5][5];
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("enter row %d:",i+1);
        for (int j = 0 ; j < 5 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int columns[5]={0};
    int rows[5]={0};
    for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            rows[i]+=arr[i][j];
            columns[j]+=arr[i][j];
        }

    }
    printf("the sum of rows:");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d ",rows[i]);
    }
    printf("\nthe sum of columns:");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%d ",columns[i]);
    }
    return 0;
}