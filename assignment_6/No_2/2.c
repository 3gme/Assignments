/*
2-Write a C program to count total number of alphabets, digits or special characters in a string using loop. 
*/
#include <stdio.h>
#include <string.h>

    int i ;
void getstr(char str[],int *len)
{
    for( i = 0 ; i < (*len)-1 ; i++)
    {
        char ch;
        ch = getchar();
        if(ch!=10) str[i] = ch ;
        else break;
    }
    str[i]='\0';
    *len = i ;
    printf("%s, %d \n",str ,(int)strlen(str));
}

void determinechar(char str[] ,int *alpha, int *digit ,int *special,int len)
{
    int j;
    for( j = 0 ; j < len ; j++)
    {
        if(str[j]==' ') continue;
        if(str[j]==10) break;
        else if(str[j]>='a' && str[j] <= 'z') ++*alpha;
        else if(str[j]>'z' && str[j] <= 'Z') ++(*alpha);
        else if(str[j]>='0' && str[j] <= '9') ++(*digit);
        else ++(*special);
    }
}

int main ()
{
    char str[100];
    int len = 100;
    int alpha =0 , digit =0,special =0;
    printf("enter a string less than 100 character:\n");
    getstr(str,&len);
    determinechar(str,&alpha,&digit ,&special ,len);
    printf("digits = %d\nalpa = %d\nspecial = %d\n",digit,alpha ,special);
}