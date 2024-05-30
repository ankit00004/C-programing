/*
  Fat Gram Calculator
  Design a program that asks for the number of fat grams and calories in a food item. Validate the input as follows:
  ▪	Make sure the number of fat grams and calories are not less than 0.
  ▪	According to nutritional formulas, the number of calories cannot exceed fatgrams*9.
  Make sure that the number of calories entered is not greater than fatgrams*9.
  Once correct data has been entered, the program should calculate and display the percentage of calories that come from fat.
  Use the following formula:
  Percentage of calories from fat = (Fatgrams*9) ÷ Calories
  Some nutritionists classify a food as “low fat” if less than 30 percent of its 	calories come from fat.
  If the results of this formula are less than 0.3,
  the program should display a message indicating the food is low in fat.
*/
// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>

float pctCalFromFat(float f, float c);

int main()
{
    float fatgms, cals, fat_per_cals;

    printf("Enter the calories in grams : ");
    scanf("%f", &cals);

    printf("Enter the fat in grams : ");
    scanf("%f", &fatgms);

    if (cals == 0 || fatgms == 0)
    {
        printf(" !! Fat or Cals can't be zero !!");
    }

    if (cals == 0 && fatgms == 0)
    {
        printf(" !! Cals and Fat can't be zero !!");
    }

    else if (cals > 9 * fatgms)
    {
        printf(" !! The number of cals cannot exceed the fat !! ");
    }
    else
    {
        fat_per_cals = pctCalFromFat(fatgms, cals);

        printf(" Percentage of calories form fat is : %.2f ", fat_per_cals);
    }

    return 0;
}

float pctCalFromFat(float f, float c)
{
    float fpc;

    fpc = f * 9 / c;

    return fpc;
}
