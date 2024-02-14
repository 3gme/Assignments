/*
04.
Write a c code login code but use a function called login.
*/

#include <stdio.h>
#define Id 1000263279

int check(int pass , int i )
{
    if(pass == 123456) 
    {
        printf("welcome");
        return 1;
    }
    else 
    {
        if(2==i) printf("you are restricted");
        else printf("try again \n");
        return 0;
    }
}

int main()
{
    int id,pass;
    printf("enter the Id:");
    scanf("%d",&id);
    if(id != Id){
        printf("incorrect id");
        return 0;
    }
    else{

        for(int i = 0 ; i < 3 ; i++)
        {
        printf("enter the pass:");
        scanf("%d",&pass);
        if(check(pass,i)) break;
        }
    }
}