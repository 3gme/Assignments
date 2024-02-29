/*
03.
Write a C code that defines 2 arrays, and sends them to a function that applies scalar
multiplication between the two arrays and returns the result, the main function then will
print the result.
*/

#include <stdio.h>

int scalar_mul(int arr1[],int arr2[], int len)
{
    int mul =0 ;
    for(int i = 0 ; i < len ; i++)
    {
        mul +=(arr1[i]*arr2[i]);
    }
    return mul;
}

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5};
    int len = sizeof(arr1)/sizeof(arr1[0]);
    printf("the result of the scalar multiplication is: %d",scalar_mul(arr1,arr2,len));
}