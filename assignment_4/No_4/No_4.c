/*
04.
Write a C code to find the repeating element in a given array through a function. The
function takes the array and returns the element.
*/
#include<stdio.h>


//to get arrays form the user
void GetArr(int arr[],int count){
    printf("enter the elements of the array:");
    for(int i = 0 ; i < count ; i++)
    {
        scanf("%d",&arr[i]);
    }
}


//making all elements of unique = 0.
//cause when the size isn't known we can't use this way int unique[count]={0}.
void initialize_unique(int unique[],int arr[],int count){
    for(int i = 0 ; i < count ; i++)
    {
        unique[i]=0;
    }
}


//to specify the unique elements of the array.
Get_Unique(int arr[],int unique[],int count)
{
    initialize_unique(unique,arr,count);
    int index =0;
    for(int i = 0 ; i < count ; i++)
    {
        for(int j = i ; j < count ; j++)
        {
            //check if the number is found after in the array,     <---
            //the we'll make the coresponding index in unique =1
            //to print these num later in the same order.
            if(arr[i]==arr[j] &&  i!=j) unique[i]++;
        }
    }
}

int main()
{
    printf("enter the number of elements of the array: ");
    int count;
    scanf("%d",&count);
    int arr[count];
    GetArr(arr,count);
    int unique[count] ;
    Get_Unique(arr,unique,count);
    printf("the unique elements are: ");
    for(int i = 0 ; i < count ; i++)
    {
        if(unique[i]==1)printf("%d ",arr[i]);        
    }
}