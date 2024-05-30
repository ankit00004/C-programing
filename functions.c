#include <stdio.h>
struct student
{
    char name[15], branch[15], mob[12], city[10], divi;
    int rno, pps, lac, beee, total;
    float per;
} s1;

struct student read();
struct student cal(struct student);
void display();

int main()
{
    s1 = read();
    s1 = cal(s1);
    display();
}

struct student read()
{
    struct student s1;

    printf("\nEnter name: ");
    scanf("%s", s1.name);

    printf("\nEnter branch: ");
    scanf("%s", s1.branch);

    printf("\nEnter mobile number: ");
    scanf("%s", s1.mob);

    printf("\nEnter city: ");
    scanf("%s", s1.city);

    printf("\nEnter division: ");
    scanf(" %c", &s1.divi);

    printf("\nEnter roll number: ");
    scanf("%d", &s1.rno);

    printf("\nEnter PPS marks: ");
    scanf("%d", &s1.pps);

    printf("\nEnter LAC marks: ");
    scanf("%d", &s1.lac);

    printf("\nEnter BEEE marks: ");
    scanf("%d", &s1.beee);
    return s1;
}

struct student cal(struct student m1)
{

    m1.total = m1.pps + m1.lac + m1.beee;
    m1.per = m1.total / 3.0;

    return m1;
}

void display(struct student s1)
{
    printf("Yor total percentage: %f", s1.per);
}