
/*
01.
Write a C code defines a structure for employees that contains his salary, bonus and
deductions. The program shall ask the user to enter this information for three employees
(Mohsen, Maged and Mariam). Then the program will print the total values supplied by
the finance team.
*/

#include <stdio.h>

struct employee
{
    char* name;
    double salary, bonus,deduction , total;
};

typedef struct employee employee;

void Get_employee(employee* x)
{
    printf("enter the salary \n");
    scanf("%lf",&x->salary);
    printf("enter the bonus \n");
    scanf("%lf",&x->bonus);
    printf("enter the deduction \n");
    scanf("%lf",&x->deduction);
    x->total = x->salary + x->bonus - x->deduction;
}


int main()
{
    employee Mohsen , Maged , Mariam;
    printf("Mohsen \n");
    Get_employee(&Mohsen);   
    printf("Maged \n");
    Get_employee(&Maged);   
    printf("Mariam \n");
    Get_employee(&Mariam);  
    printf("the total finance is %lf",Maged.total+Mariam.total+Mohsen.total);

}