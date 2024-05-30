/* 
Calculating the Factorial of a Number In mathematics, the notation n! represents the factorial of the non-negative integer n.
The factorial of n is the product of all the non-negative integers from 1 up through n. For example:
7! = 1 × 2 × 3 × 4 × 5 × 6 × 7 = 5,040 and
4! = 1 × 2 × 3 × 4 = 24
Design a program that asks the user to enter a non-negative integer and then displays the factorial of that number.
*/

// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>

int main()
{
    
    int n,x,i=1;    //i= factorial
    printf("\nEnter a number :");
    scanf("%d",&n);

    for(x=1;x<=n;x++)
    {
         i=i*x;
    }
    printf("\nfactorial of %d! : %d",n,i);
}
