/*
write a program to print the string marks allocate the memory dynamically,
the student can add the marks from 1 to n subjects depending on number of 
subjects he is in(userealloc)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    int n;
    printf("enter the nubmer of subjects: ");
    scanf("%d",&n);
    int *dynmc_arr= NULL;
    dynmc_arr = (int*)realloc(dynmc_arr,n*sizeof(int));
    for(int i = 0 ; i < n;i++)
    {
        int degree;
        printf("%d:-",i+1);
        scanf("%d",&degree);
        dynmc_arr[i]=degree;
    }

    for(int i = 0 ; i < n;i++)
    {
        printf("saved_res_%d:- %d\n",i+1,dynmc_arr[i]);
    }
}