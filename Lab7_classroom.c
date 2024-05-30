/*
    Watson Elementary School contains 10 classrooms numbered 1 through 10.
   Each classroom can contain any number of students up to 12.
   Each student takes an achievement test at the end of the school year and receives a score from 0 through 100.
   Write a program that accepts data for each student in the school—student ID, classroom number, and score on the achievement test.
   Design a program that lists the total points scored for each of the 10 classrooms.
*/

// Name: Ankit bhardwaj
//  Class: FY P Division
//  Roll no: 2213638

#include <stdio.h>

int main()
{
    printf("\t\t\t\t\t************_Waston Elementary School_************");
    int a, b, c, student, score[12], ID[12], TS, S, d = 0, e = 0;
    for (a = 0; a < 10; a++)
    {
        printf("\n\nEnter the number of student in class %d:", a + 1);
        scanf("%d", &student);
        for (b = 0; b < student; b++)
        {
            printf("\nFor student %d:", b + 1);
            printf("\nEnter student_ID:");
            scanf("%d", &ID);
            printf("\nEnter score:");
            scanf("%d", &score[b]);
            S = d + score[b];
            d = S;
        }

        TS = e + S;
        S = TS;
    }

    printf("\n Total score: %d", TS);
}
