/*
Color Mixer
The colors red, blue, and yellow are known as the primary colors because they cannot be made by mixing other colors.
When you mix two primary colors, you get a secondary color, as shown here:
▪ When you mix red and blue, you get purple.
▪ When you mix red and yellow, you get orange.
▪ When you mix blue and yellow, you get green.
Design a program that prompts the user to enter the names of two primary colors to mix.
If the user enters anything other than “red,” “blue,” or “yellow,” the program should display an error message.
Otherwise, the program should display the name of the secondary color that results.
*/
// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>
#include <string.h>

void main()
{
   char color1[20], color2[20];

   printf("Enter 2 primary color from RBY :  ");
   scanf("%s %s", color1, color2);

   if (((strcmp(color1, "red") == 0) && (strcmp(color2, "blue") == 0)) ||
       ((strcmp(color1, "blue") == 0) && (strcmp(color2, "red") == 0)))
   {
      printf("you get purple");
   }
   else if (((strcmp(color1, "red") == 0) && (strcmp(color2, "yellow") == 0)) ||
            ((strcmp(color1, "yellow") == 0) && (strcmp(color2, "red") == 0)))
   {
      printf("you get orange");
   }

   else if (((strcmp(color1, "blue") == 0) && (strcmp(color2, "yellow") == 0)) ||
            ((strcmp(color1, "yellow") == 0) && (strcmp(color2, "blue") == 0)))
   {
      printf("you get green");
   }
   else
      printf("error");
}
