#include <stdio.h>
#include <string.h>
int main()
{
    char name[5][20], rev[5];
    int i, ln[5], min, max;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter your name:");
        scanf("%s", name[i]);
        ln[i] = strlen(name[i]);
        rev[i] = strrev(name[i]);
        if (strcmp(name[i], rev[i]) == 0)
            printf("%s is a palindrome", name[i]);
        else
            printf("%s is not a palimdrome", name[i]);
    }
    min = ln[0];
    for (i = 1; i <= 4; i++)
    {
        if (min > ln[i])
            min = ln[i];
    }

    max = ln[0];
    for (i = 1; i <= 4; i++)
    {
        if (max < ln[i])
            max = ln[i];
    }

    for (i = 0; i <= 4; i++)
    {
        printf("\nName:%s", name[i]);
        printf("\nlenght:%d", ln[i]);
        printf("\nReverse name:%s", rev[i]);
    }
    return 0;
}