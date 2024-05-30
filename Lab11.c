/*
  Take two numbers from the user in two variables and interchange their addresses by means of an external module.
  Display the result from the main function.
*/

// Name: Ankit bhardwaj
//  Class: FY P Division
//  Roll no: 2213638

#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{

    int tmp;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}
int main()
{

    int n1, n2;

    printf("------------------------------------------------\n");
    printf("Enter 1st number : ");
    scanf("%d", &n1);
    printf("Enter 2nd number : ");
    scanf("%d", &n2);
    
    printf("Before swapping: n1 = %d, n2 = %d \n", n1, n2);

    swap(&n1, &n2);

    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n", n1, n2);

    return 0;
}
