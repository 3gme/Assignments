/*
02.
Write a C code to manage a class of 10 students. Each student studies 4 subjects
Programming, Data Structures, Discrete Math and Algorithms.
First define an array of 10 elements and assign random grades for students. The system
will ask the user to enter the student ID then the system will show its grades. The
software shall manage wrong IDs and enable admins to manipulate the grades of the
students.
*/


#include <stdio.h>
#include <string.h>


typedef struct student
{
    int id;   
    float degrees[4];
}student;

            // list of the names of the subjects b there order in the struct
char* subjects[]= {                
    "Programming",
    "Data_Structures",
    "Discrete_Maths",
    "Algorithms"
    };

    //array of 10 students with random degrees
    student students[10] = {
        {1000,{90,80,70,60}},
        {1001,{95,85,75,77}},
        {1002,{80,81,75,90}},
        {1003,{77,88,99,100}},
        {1004,{80,76,78,79}},
        {1005,{81,91,71,70}},
        {1006,{92,82,72,62}},
        {1007,{74,75,80,90}},
        {1008,{78,80,88,71}},
        {1009,{84,72,79,64}}
    };

    // to display the degrees of sudent x.
    void Show_degrees(student x)
    {
        printf("\n----------------\n");
        printf("Programming = %f\nData_Structures = %f",x.degrees[0],x.degrees[1]);
        printf("\nDiscrete_Maths = %f\nAlgorithms = %f",x.degrees[2],x.degrees[3]);
        printf("\n----------------\n");
    }

    //check if the id is true or not,(if true returns 0 else return 1).
    int Check_id(int id,int* Student_num)
    {
        for(int i = 0 ; i < 10 ; i++)
        {
            if(students[i].id == id)
            {
                *Student_num = i ;
                return 0;
            }
        }
        return 1;
    }


int main()
{
    printf("-------welcome------\n");
    int iteratoin = 1;
    int id,Student_num;
    printf("User or Admin('u' for user and 'a' for admin) : ");
    char ch; scanf("%c",&ch);
    while(iteratoin)                //to be able to use the program multiple times.
    {

        // admin sectoin ..
        if(ch == 'a')
        {
            printf("enter the id of the student : ");
            scanf("%d",&id);                //take the id of the student and check if it's true id.
            if(Check_id(id,&Student_num))
            {
                printf("wront id try again ..\n");
                continue;
            }

                //in case of true id
                int True = 1;
            while(True)             //adds the ability to change more than one degree
            {
                printf("which subject do you want to change(Programming, Data_Structures, Discrete_Math and Algorithms):");
                int editSub;
                int flag = 1; //this flag to handle if the adimin missed the spelling

                while(flag)
                {
                    char sub[20];    
                    scanf("%s",sub);
                    for(int i = 0 ; i < 4 ; i++)
                    {
                        if (!strcmp(sub,subjects[i]))
                        {
                        editSub = i;
                        flag = 0;
                        } 
                    }
                        if(flag)
                        printf("wrong subject name try agian\n");
                }

                printf("enter the new degree: ");
                scanf("%f",&students[Student_num].degrees[editSub]);

                printf("to change another degree enter 1 or enter 0 to show the last degrees and close: ");
                scanf("%d",&True);
                getchar();
            }
                printf("---------the new degree--------");
                Show_degrees(students[Student_num]);
        }

        //user section .. 
        else if (ch == 'u')
        {
            // get and check the id .....
            printf("enter the id of the student: ");
            int id ; scanf("%d",&id);
            if(Check_id(id,&Student_num))
            {
            printf("wrong id try again ..\n");
            continue;
            }

            //in case of correct id ..
            Show_degrees(students[Student_num]);
            
        }
        else
            printf("wrong data try again :) ");

        printf("enter 1 for another student degrees or 0 to close: ");
        scanf("%d",&iteratoin); 
        getchar();
    }
}