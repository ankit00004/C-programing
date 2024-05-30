/*
An automobile company has serial numbers for engine parts starting from AA0 to FF9.
The other characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity manufactured.
1. Specify a structure to store information corresponding to a part.
2. Write a program to retrieve information on parts with serial numbers between BB1 and CC6.
*/
// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638
#include <stdio.h>
int main()
{
    int i, n;
    printf("\nNumber of parts :");
    scanf("%d", &n);
    struct engine
    {
        char sn[3];
        int yom, qt;
        char mat[25];
    } part[n];
    printf("\n\nEnter serial number, year of manufacture, materials, quantity for the details of the parts");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the details for part %d\n", i + 1);
        scanf("%s %d %s %d", part[i].sn, &part[i].yom, part[i].mat, &part[i].qt);
    }
    for (i = 0; i < n; i++)
    {
        if (part[i].sn[0] == 'B' && part[i].sn[1] == 'B')
        {
            printf("\nDetails of engine number with %s :", part[i].sn);
            printf("\nYear of manufacture : %d\nMateial : %s\nQuantity : %d", part[i].yom, part[i].mat, part[i].qt);
        }
        if (part[i].sn[0] == 'C' && part[i].sn[1] == 'C')
        {
            printf("\nDetails of engine number with %s :", part[i].sn);
            printf("\nYear of manufacture : %d\nMateial : %s\nQuantity : %d", part[i].yom, part[i].mat, part[i].qt);
        }
    }
}