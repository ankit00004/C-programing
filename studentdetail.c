// 1. DOCUMENTATION
/* PROBLEM STATEMENT :-Write a C program to display student details such as name, branch, division, roll number,mobile number, address(city), percentage secured in SSC, HSC. Display it using:
i. Ordinary Variable
ii. Pointer Variable */

// Ankit Bhardwaj
// P division

// 2. PREPROCESSING
#include <stdio.h> //Standard input-output_Header_File(Library_File)

// 3. DRIVER CODE

int main() // Program execution point
{
    // Type Declaration
    char name[15], branch[10], city[15], mob[15], divi; //%s, %c
    int rno;                                            //%d
    float ssc, hsc;                                     //%f

    // INPUT

    printf("\n\n MIT STUDENT APPLICATION \n\n");

    printf("\nPlease Enter Your Name: ");
    scanf("%s", name);

    printf("\nPlease Enter Your Mobile Number: ");
    scanf("%s", mob);

    printf("Please Enter Your City: ");
    scanf("%s", city);

    printf("Please Enter Your Branch: ");
    scanf("%s", branch);

    printf("Please Enter Your Division: ");
    scanf(" %c", &divi);

    printf("Please Enter Your Roll Number: ");
    scanf("%d", &rno);

    printf("Percentage Secured In SSC: ");
    scanf("%f", &ssc);

    printf("Percentage Secured In HSC: ");
    scanf("%f", &hsc);

    // OUTPUT :- i) Ordinary Variable

    printf("\n\t MIT STUDENT DETAILS: \t\n");
    printf("\n1. NAME: %s", name);
    printf("\n2. MOBILE NUMBER: %s", mob);
    printf("\n3. CITY: %s", city);
    printf("\n4. BRANCH: %s", branch);
    printf("\n5. DIVISION: %c", divi);
    printf("\n6. ROLL NUMBER: %d", rno);
    printf("\n7. Percentage In SSC: %.2f", ssc);
    printf("\n8. Percentage In HSC: %.2f \n", hsc);

    return 0; // EXIT_SUCCESS
}
