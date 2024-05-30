/*
On day one of college, two students were interacting with each other.
 Write a program to display the communication between them.
*/
 
 // Name: Ankit bhardwaj
 //Class: FY P Division
 //Roll no: 2213638

#include <stdlib.h>

int main()

{

    char student1[20],student2[20];
    printf("\n\n\t\t Please enter the communication done by 1st student :");
    scanf("%s",student1);

    printf("\n\n\t\t Please enter the communication done by 2nd student :");
    scanf("%s",student2);

    printf("\n\tCommunication between two students");
    printf("\n\t 1st student : %s",student1);
    printf("\n\t 2nd student : %s",student2);
    return 0;
}