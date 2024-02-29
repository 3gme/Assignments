/*
04.
Write a C code that defines a function which takes an array as input argument and apply
the bubble sorting algorithm on it, then prints the result.
*/

#include <stdio.h>

void bubble_sorting(int arr[],int len)
{
    for (int i = 0 ; i < len-1 ; i++)
    {
        for(int j = i+1 ; j < len ; j++)
        if(arr[i] > arr[j])
        {
            int num = arr[i];
            arr[i] = arr[j];
            arr[j]= num; 
        }
    }
}

void Print_Arr(int arr[] , int len)
{
    int *ptr;
    for(ptr = arr; ptr < arr+len ; ptr++)
        printf("%d ",*ptr);
    printf("\n");
}

int main()
{
    int arr[] = {1,5,4,7,2,8,3,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("the array before bubble sorting is: ");
    Print_Arr(arr,len);    
    bubble_sorting(arr,len);
    printf("the array after bubble sorting is: ");
    Print_Arr(arr,len);    
}
