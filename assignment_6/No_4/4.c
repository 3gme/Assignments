/*
4-Write a C program to input any string from user and find the first occurrence of a given character in the string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    printf("enter the number of character you will enter ");
    int len; scanf("%d",&len);
    char *str = (char* ) calloc(len+1,sizeof(char)); // one for the null character
    getchar(); //to drop the new line
    printf("enter the string: \n");
    gets(str); //get a full line string
    printf("enter the character: ");
    char ch; scanf("%c",&ch);
    int i;
    
    for(i = 0  ; i < strlen(str) ;i++)
    {
        if(ch == str[i]) break;
    }
    printf("it's the %dth number of \"%s\"",i+1,str);

}