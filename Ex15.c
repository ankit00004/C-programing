/*
  Write a C program to demonstrate basic file handling operations
  i) open a text file in a write mode
  ii) Write some contents to file
  iii) display file contents on screen
*/

// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *fp;
	fp = fopen("file2.txt", "r");

	if (fp == NULL)
	{
		printf("\n No such file exist");
	}

	while (ch != EOF)
	{
		ch = fgetc(fp);
		putchar(ch);
	}

	fclose(fp);

	return 0;
}
