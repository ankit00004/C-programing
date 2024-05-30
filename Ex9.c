/*
  If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits.
  For example, if the number that is input is 12391 then the output should be displayed as 23402.
*/

// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>
int main()
{
    int num, output = 0, remainder;
    printf("Enter the five digit number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        remainder++;
        output = (output * 10) + remainder;
        num = num / 10;
    }
    num = 0;
    while (output != 0)
    {
        remainder = output % 10;
        num = (num * 10) + remainder;
        output = output / 10;
    }
    printf("Increased number is %d.", num);
    return 0;
}
