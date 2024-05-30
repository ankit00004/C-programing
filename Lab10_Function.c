/*
  Create a program that calls a method that computes the final price for a sales transaction.
  The program contains variables that hold the price of an item, the salesperson’s commission expressed as a percentage,
  and the customer discount expressed as a percentage. 
  Create a calculatePrice() method that determines the final price and returns the value to the calling method. 
  The calculatePrice() method requires three arguments: product price, salesperson commission rate, and customer discount rate. 
  A product’s final price is the original price plus the commission amount minus the discount amount.
  The customer discount is taken as a percentage of the total price after the salesperson commission has been added to the original price.
*/

// Name: Ankit bhardwaj
//  Class: FY P Division
//  Roll no: 2213638

#include <stdio.h>
float cal_price();
int main()
{
  float finalprice;
  finalprice=cal_price();
  printf("Final Amount: %f",finalprice); 
  
}
float cal_price()
{

  float finalprice,ca,da,price,dr,cr;
  printf("\nEnter price:");
  scanf("%f",&price);
  printf("Ente commission rate:");
  scanf("%f",&cr);
  printf("Enter discount rate:");
  scanf("%f",&dr);
  ca=(cr/100)*price;
  da=(dr/100)*price;
  finalprice=price+ca-da;
  return finalprice;
}

