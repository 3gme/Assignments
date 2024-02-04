/*
02.
Write a C code that will ask the user to enter a value then print it.
*/

#include <stdio.h>
int main(){
    printf("enter a value you want to print\n");
    float value = 0;
    scanf("%d",&value);
    printf("the value you entered is : %d",value);
    return 0;
}
