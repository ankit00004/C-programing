/*
Riya wants to learn basic calculation, help her for following operations by program:
Addition of 2 numbers
1. Subtraction of 2 numbers
2. Division operation of 2 numbers
3. Multiplication of 2 numbers
4. Find the remainder
5. Calculation of percentage
*/
// Name: Ankit bhardwaj
//Class: FY P Division
//Roll no: 2213638



#include <stdio.h>
#include <stdlib.h>

int main()
{

    float add,sub,pro,div,per;
    int num1,num2,rem;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    add=num1+num2;
    sub=num1-num2;
    pro=num1*num2;
    div=num1/num2;
    per=(num1/num2)*100;
    rem=num1%num2;
    
    printf("The Arithmetic operations for two given number are below :-");

    printf("\nAddition of Num1 + Num2        :%f",add);
    printf("\nSubstraction of Num1 - Num2    :%f",sub);
    printf("\nProduct of Num1 * Num2         :%f",pro);
    printf("\nDivision of Num1/Num2          :%f",div);
    printf("\nPercentage of (Num1/Num2)*100  :%f",per);
    printf("\nRemendair                      :%d",rem); 


}