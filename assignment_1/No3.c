/*
03.
Write a program that asks the user to enter a dollars and cents amount, then display the
amount with 5% tax added:
INPUT: Enter an amount: 100.00
OUTPUT: With tax added : $ 105.00
*/

#include <stdio.h>
int main(){
    float orignial_amount = 0.0;
    printf("enter your amout to get the amout with 5 persent tax added \n");
    scanf("%f",&orignial_amount);
    float amount_taxed = orignial_amount * 1.05;
    printf("the amount with taxes is : %.2f \n",amount_taxed);

    return 0;
}