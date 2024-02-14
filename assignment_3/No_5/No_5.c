/*
05.
Write a C code containing a function that gets the fibonacci of a given number.
Hint: Fibonacci is defined as :
f(n) = f(n - 1) + F(n - 2), f(0) = 0, f(1) = 1.
*/
#include <stdio.h>

//fibonacci: 0 1 1 2 3 5 8 .......
int get_fibonacci(int i){
    if (i<=1) return i;
    return 2*i-3;
}

int main()
{
    printf("enter a number to get the fibonacci: ");
    int n;
    scanf("%d",&n);
    printf("the fibonacci is : %d",get_fibonacci(n));

}
