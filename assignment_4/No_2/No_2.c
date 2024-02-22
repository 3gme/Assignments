/*
02.
Write a program in C to find the second largest element in an array.
The elements of the array entered by the user.
*/
#include<stdio.h>

//to get arrays form the user
void GetArr(int arr[],int count){
    printf("Enter the elements of the array: ");
    for(int i = 0 ; i < count ; i++)
    {
        scanf("%d",&arr[i]);
    }
}


// sort the array to get the 2nd maximum num.
int Get_2nd_Max(int sorted[],int count)
{
    int num;
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
    return sorted[count-2];
}


//to check if two nums are the same
int equal(int arr[],int count)
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

int main(){
    printf("enter the count of the array: ");
    int count;
    scanf("%d",&count);
    int arr[count];
    GetArr(arr,count);
    if(equal(arr,count))printf("there are two similar nums.");
    else{
    int _2nd_max = Get_2nd_Max(arr,count);
    printf("the 2nd max is: %d",_2nd_max);
    }
}