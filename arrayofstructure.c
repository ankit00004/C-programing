#include <stdio.h>
struct student
{
    char name[15], branch[15], mob[12], city[10], divi;
    int rno, pps, lac, beee, total;
    float ssc, hsc, per;
} s1[3];

int main()
{
    int i;

    for (i = 0; i <= 2; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s1[i].name);

        printf("\nEnter branch: ");
        scanf("%s", s1[i].branch);

        printf("\nEnter mobile number: ");
        scanf("%s", s1[i].mob);

        printf("\nEnter city: ");
        scanf("%s", s1[i].city);

        printf("\nEnter division: ");
        scanf(" %c", &s1[i].divi);

        printf("\nEnter roll number: ");
        scanf("%d", &s1[i].rno);

        printf("\nEnter SSC marks: ");
        scanf("%f", &s1[i].ssc);

        printf("\nEnter hsc marks: ");
        scanf("%f", &s1[i].hsc);
    }

    printf("\n--------STUDENT DETAILS------------");

    for (i = 0; i < 3; i++)
    {

        printf("\n1.name : %s", s1[i].name);
        printf("\n2.branch : %s", s1[i].branch);
        printf("\n3.Mobile no: %s", s1[i].mob);
        printf("\n4.City: %s", s1[i].city);
        printf("\n5.Division: %c", s1[i].divi);
        printf("\n6.Roll no: %d", s1[i].rno);
        printf("\n7.SSC marks: %f", s1[i].ssc);
        printf("\n8.HSC marks: %f", s1[i].hsc);
        printf("\n\n");
    }
    return 0;
}
