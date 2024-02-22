/*
03.
Write a program in C to print all unique elements of an unsorted array.
The elements of the array entered by the user.
Ex:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
1 5 8 7 3 2 4 6
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
        for(int j = 0 ; j < i ; j++)
        {
            //check if the number is found before in array,
            //the we'll make the coresponding index in unique =1
            //to not print this num later.
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
        if(unique[i]==0)printf("%d ",arr[i]);        
    }


}