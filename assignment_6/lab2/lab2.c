/*
find out maximum and minimum from an array dynamic memory allocation
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("enter the nubmer of elements you will enter: ");
    int len; scanf("%d",&len);
    int* arr=(int*)calloc(len,sizeof(int));
    int max = arr[0] , min = arr[0];
    printf("enter the elements of the array of %d elements\n",len);
    for(int i = 0 ; i < len ; i++)
    {
        printf("%d- ",i+1);
        scanf("%d",(arr+i));
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    printf("max => %d\nmin => %d",max , min);
}