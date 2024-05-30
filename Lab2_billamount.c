/*
  Write a C program to accept electricity bill details from the user such as
  name, address, customer ID, pin code, bill amount and month of bill and display the same.
*/

// Name: Ankit bhardwaj
//  Class: FY P Division
//  Roll no: 2213638

#include <stdio.h>
#include <stdlib.h>

int main()
{

  int billamount, custID, pincode;
  char name[20], adress[20], monthofbill[20];
  printf("\n\n\n\t\t\t ***********Electricity Bill Amount***********");
  printf("\n Enter your details :\n");
  printf("Enter your customer ID :\n");
  scanf("%d", &custID);
  printf("Enter your name :\n");
  scanf("%s", &name);
  printf("Enter your address :\n");
  scanf("%s", &adress);
  printf("Enter your pincode :\n");
  scanf("%d", &pincode);
  printf("Enter Bill Amount :\n");
  scanf("%d", &billamount);
  printf("Enter month of bill :\n");
  scanf("%s", &monthofbill);
  printf("\n\n\n\n\t\t\t*********Displaying***********");
  printf("\n\n Your bill amount is sucessfully paid");
  printf("\nCustomer ID   : %d", custID);
  printf("\nName          : %s", name);
  printf("\nAddress       : %s", adress);
  printf("\nPincode       : %d", pincode);
  printf("\nMonth of Bill : %s", monthofbill);
  printf("\nBill Amount   : %d", billamount);
}