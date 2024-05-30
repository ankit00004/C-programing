/*
  Enter the marks of 3 students in Chemistry, Mathematics and Physics (each out of 100)
  named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
*/

// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>

struct Marks
{
    int roll_no;
    char name[30];
    float chem_marks, maths_marks, phy_marks;
};

int main()
{
    struct Marks marks[5];
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter roll no.: ");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name: ");
        scanf("%s", marks[i].name);
        printf("Enter Chemistry marks: ");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks: ");
        scanf("%f", &marks[i].maths_marks);
        printf("Enter Physics marks: ");
        scanf("%f", &marks[i].phy_marks);
    }
    for (int i = 0; i < 3; i++)
     {
         printf("Student %d\n", i + 1);
         float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks) / 300.0 * 100;
         printf("Percentage : %f\n", percentage);
     }
    return 0;
}