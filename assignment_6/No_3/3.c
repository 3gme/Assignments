/*
write a c program to find erverse of a given string using loop. How to
find reverse of any given string using loop in c programm*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//get string from the user 
void getstr(char str[],int *len)
{
    int i;
    getchar(); //i used this to drop the newline(enter) enterd after the number of characters of the string
    // of it will break the loop from the first input character
    for( i = 0 ; i < (*len)-1 ; i++)
    {
        char ch;
        ch = getchar();
        if(ch!=10) str[i] = ch ;
        else break;
    }
    str[i]='\0';
    *len = i ;
}


//print the reversed string 
void printReverse(char str[],int len)
{
    int i;
    printf("-------------------\nthe reversed\n");
    for( i = len-1 ; i >= 0 ; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}


int main()
{
    printf("enter the number of character of the string you will enter: ");
    int len =0;
    scanf("%d",&len);
    char *str=(char*)malloc((len+1)*sizeof(char)); // added one for the null character.
    printf("enter the string of %d:\n",len);
    getstr(str,&len);

    printReverse(str,len);
    free(str);



}