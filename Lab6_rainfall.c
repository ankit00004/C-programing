/*
  Design a program that uses nested loops to collect data and calculate the average rainfall over a period of years.
  The program should first ask for the number of years. The outer loop will iterate once for each year.
  The inner loop will iterate twelve times, once for each month.
  Each iteration of the inner loop will ask the user for the inches of rainfall for that month.
  After all iterations, the program should display the number of months, the total inches of rainfall,
  and the average rainfall per month for the entire period.
*/

//  Name: Ankit bhardwaj
//  Class: FY P Division
//  Roll no: 2213638

#include <stdio.h>

int main()
{

  int yr, month, i, j, inches, total = 0, tnm, ar;
  printf("Enter the number of years :");
  scanf("%d", &yr);
  for (i = 1; i <= yr; i++)
  {
    for (j = 1; j <= 12; j++)
    {
      printf("Enter the inches of rainfall for month %d :", j);
      scanf("%d", &inches);
      total = total + inches;
    }
  }
  tnm = yr * 12;
  ar = total / tnm;
  printf("Total number of month:        %d", tnm);
  printf("\nTotal inches of rainfall:   %d", total);
  printf("\nAverage rainfall per month: %d", ar);
}
