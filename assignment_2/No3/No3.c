/*
Write a C code that asks the user to enter his ID and then the program will print his
name.
Available IDs are: (1234 -> Harry), (5678 -> Ron), (1145 -> Hermione)
Any other number, the program will print "Wrong ID".
*/

#include <stdio.h>
#define ID1 1234
#define ID2 5678
#define ID3 1145
int main()
{
    printf("enter the ID to print the username: ");
    int ID;
    scanf("%d",&ID);
    switch (ID)
    {
    case ID1 :
        printf("%d --> Name: Harry",ID1);
        break;
    
    case ID2 :
        printf("%d --> Name: Ron",ID2);
        break;
    
    case ID3 :
        printf("%d --> Name: Hermione",ID3);
        break;
    
    default:
        printf("this ID isn't available");
        break;
    }
}