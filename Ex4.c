/*
Ramesh’s basic salary is input through the keyboard.
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.
*/

// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>

int main()
{

    float bs, da, hr, gs; // bs is basic salary, da is dearness allowance, gs is gross salary
    printf("\n\t Please enter Ramesh's basic salary :");
    scanf("%f", &bs);
    da = bs * (40 / 100.00);
    hr = bs * (20 / 100.00);
    gs = bs + da + hr;
    printf("\n\t Ramesh's gross salary :%f", gs);
}