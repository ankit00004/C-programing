#include <stdio.h>
#include <string.h>
main()
{
    int a, b, c, d;
    char s1[20], s2[20], s3[20], s4[20];
    printf("enter string 1 :\n");
    gets(s1);
    printf("\nenter string 2:\n");
    gets(s2);
    printf("\nenter string 3:\n");
    gets(s3);
    printf("\nDisplay First Name:\n");
    puts(s1);
    printf("\nDisplay Second Name:\n");
    puts(s2);
    printf("\nDisplay Third Name:\n");
    puts(s3);
    printf("\n");

    // the function to be performed are strlen,strcpy,strcat,strcmp

    // to find the length of string
    printf("length of string is");
    a = strlen(s1);
    printf("\n%d", a);
    b = strlen(s2);
    printf("\n%d", b);
    c = strlen(s3);
    printf("\n%d", c);

    // tp copy the strings
    strcpy(s4, s1);
    printf("\nthe copied string (string4)is %s", s4);
    strcpy(s4, s2);
    printf("\nafter copying string 2 in the string 4, string 4 becomes %s", s4);
    puts(s4);

    // to combine the strings
    strcat(s1, s2);
    printf("\nthe combined string is");
    puts(s1);
    // to compare two strings
    int j;
    j = strcmp(s1, s4);
    if (j == 0)
    {
        printf("THE DIFFERENCE BETWEEN THE TWO STRINGS S1 AND S4 IS 0");
    }
    else
    {
        printf("THE DIFFERENCE BETWEEN THE TWO STRINGS IS %d", j);
    }
}