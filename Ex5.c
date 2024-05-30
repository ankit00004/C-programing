/*
  Serendipity Booksellers has a book club that awards points to its customers based on the number of books purchased each month.
  The points are awarded as follows:
  ▪ 	If a customer purchases 0 books, he or she earns 0 points.
  ▪ 	If a customer purchases 1 book, he or she earns 5 points.
  ▪ 	If a customer purchases 2 books, he or she earns 15 points.
  ▪ 	If a customer purchases 3 books, he or she earns 30 points.
  ▪ 	If a customer purchases 4 or more books, he or she earns 60 points.
  Design a program that asks the user to enter the number of books that he or she has purchased this month and displays the number of points awarded
*/

// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>

int main()
{
    int number_book;

    printf("\n\t Please enter number of books purchased this month :");
    scanf("%d", &number_book);
    if (number_book == 0)
    {
        printf("\n\t You have earned 0 points");
    }
    else if (number_book == 1)
    {
        printf("\n\t You have earned 5 points");
    }
    else if (number_book == 2)
    {
        printf("\n\t You have earned 15 points");
    }
    else if (number_book == 3)
    {
        printf("\n\t You have earned 30 points");
    }
    else if (number_book >= 4)
    {
        printf("\n\t You have earned 60 points");
    }
}