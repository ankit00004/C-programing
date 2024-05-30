/*
  Using array, design a program that lets the user enter the total rainfall for each of 12 months.
  The program should calculate and display the total rainfall for the year, the average monthly rainfall,
  and the months with the highest and lowest amounts.
*/
// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638
#include <stdio.h>
int main()
{
  int rain[12];
  int i, j;
  float avg, total = 0, inches;
  int month_max, month_min;
  float max, min;
  for (i = 0; i <= 12; i++)
  {
    printf("Enter rainfall of month %d:", i);
    scanf("%f", inches);
    rain[i] = inches;
    total = total + inches;
  }
  avg = total / 12;
  printf("Total rainfall for this year in inches:%.2f\n", total);
  printf("The average rainfall inches per month:%.2f\n", avg);
  max = rain[0];
  min = rain[0];

  for (j = 0; j <= 12; j++)
  {
    if (rain[j] > max)
    {
      max = rain[j];
      month_max = j + 1;
    }
    if (rain[j] < min)
    {
      min = rain[j];
      month_min = j + 1;
    }
  }
  printf("The highest rainfall is %.2f in the month %d\n", max, month_max);
  printf("The lowest rainfall is %.2f in the month %d\n", min, month_min);
  return 0;
}