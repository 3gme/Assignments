/*
02.
Write a C code that will ask the user to enter a value then print it.
*/

#include <stdio.h>
int main(){
    printf("enter a value you want to print\n");
    float value = 0;
    scanf("%f",&value);
    printf("the value you entered is : %.5f",value);
    return 0;
}
