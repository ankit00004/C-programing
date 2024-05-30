/*
  Running on a particular treadmill you burn 3.9 calories per minute.
  Design a program that uses a loop to display the number of calories burned after 10,15,20,25,30 minutes.
*/

// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>

int main()
{
  int i;
  float calories_burn;

  for (i = 10; i <= 30; i += 5)
  {
    calories_burn = 3.9 * i;
    printf("\n\t Calories burnt in %d minutes : %f", i, calories_burn);
  }
}