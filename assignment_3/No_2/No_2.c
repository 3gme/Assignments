/*
02.
Write a C code swap two global variables through a function.
*/

#include <stdio.h>
float Global,global;

void swap(float*a,float*b)
{
    float c = *a;
    *a = *b;
    *b = c; 
}

int main()
{
    printf("enter two nums to be swapped \nA:");
    scanf("%f",&Global);
    printf("B:");
    scanf("%f",&global);
    // in similarity case.
    if(Global == global) printf("Note: the numbers are the same\n"); 
    swap(&Global,&global);
    printf("the values after swap is\nA:%0.4f \t B:%.4f",Global,global);

}