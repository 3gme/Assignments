/*
01.
Write a program in C to sort elements of an array in ascending and descending order :
The User Enter 0 for ascending or Enter 1 for descending. The elements of the array
entered by the user.
*/
#include<stdio.h>
int count;

//responsible for sorting the array
void ArrSorted_Ascending(int sorted[],int order){
    int num;
    if(order == 1)      //ascending order
    {
        for(int i = 0 ; i < count ; i++)
        {
            for(int j = i+1; j<count; j++)
            {
                if(sorted[i]> sorted[j]) 
                {
                    num = sorted[i];
                    sorted[i]= sorted[j];
                    sorted[j]=num;
                }
            }
        }
    }
    else        //descending order
    {
            for(int i = 0 ; i < count ; i++)
            {
                for(int j = i+1; j<count; j++)
                {
                    if(sorted[i]< sorted[j]) 
                    {
                        num = sorted[i];
                        sorted[i]= sorted[j];
                        sorted[j]=num;
                    }
                }
            }
    }
}

//to check if two nums are the same
int equal(int arr[])
{
    for(int i = 0 ; i < count ; i++)
    {
        for(int j = i+1; j<count; j++)
        {
            if(arr[i]==arr[j]) return 1;
        }
    }
    return 0;
}

//to get arrays form the user
void GetArr(int arr[]){
    for(int i = 0 ; i < count ; i++)
    {
        scanf("%d",&arr[i]);
    }
}

//to print arrays
void PrintArr(int arr[]){
    for(int i = 0 ; i < count ; i++)
    {
        printf("%d ",arr[i]);
    }

}

int main()
{
    printf("enter the number of the array:");
    scanf("%d",&count);
    printf("enter 1 for ascending 2 for descending: ");
    int order;
    scanf("%d",&order);
    if(order < 1 || order > 2){
        printf("unkown input");
        return 0;
    }
    printf("enter the %d elements of the array: ",count);
    int arr[count];
    GetArr(arr);
    ArrSorted_Ascending(arr,order);
    if(equal(arr)) printf("sorry there are two similar nums");
    else{
    printf("the new order is: ");
    PrintArr(arr);
    }
}

