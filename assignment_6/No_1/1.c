/*
1-Write a C program to convert string from lowercase to uppercase string using loop. 
*/

#include <stdio.h>
#include <string.h>
#define diff 32     //the difference between the liter in lower case(a=97) and upper case(A=65).

void getstr(char str[],int len)
{
    int i ;
    for( i = 0 ; i < len-1 ; i++)
    {
        char ch;
        ch = getchar();
        if(ch!=10) str[i] = ch ;
        else break;
    }
    str[i]='\0';
}

void makeupper(char str[],int len)
{
    for(int i = 0 ; i < len-1 ; i++)
        {
            if(str[i]=='\0') break;
            if(str[i]!=32) str[i]-=diff;
        }

}

int main ()
{
    char str[100];
    printf("enter a string less than 100 character and doesn't have spaces:\n");
    getstr(str,(sizeof(str)-1));
    makeupper(str,(sizeof(str)-1));
    printf("%s",str);
}