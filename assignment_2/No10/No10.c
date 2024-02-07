/*
Write a C that asks the user to enter his ID and his password, if the ID is correct the
system will ask the user to enter his password up to 3 times, if he enters the password
right the system welcomes him, if the three times are incorrect, the system prints "No
more tries". The system prints "You are not registered" on every wrong try. (Login
code)
*/
#include <stdio.h>
int main()
{
    int id = 1000263279;
    int pass = 12345;
    int ID,Password;
    printf("enter the ID and the Password \n");
    printf("ID: ");
    scanf("%d",&ID);
    int count = 0 ;
    if(id == ID)
    {
        while(count != 3)
        {
            printf("password: ");
            scanf("%d",&Password);
            if(pass == Password){
                printf("Welcome \n");
                break;
            }
            else{
                printf("sorry, you aren't registered \n");
                count++;
            }
        }
    }
    else printf("Wrong ID.");
}