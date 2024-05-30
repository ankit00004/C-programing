/*
   To understand File handling in C like creation , opening, closing, reading from and writing to a File .
*/
// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638
#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fp;
   char c;
   int i = 1;
   fp = fopen("file.txt", "r+");
   if (fp == NULL)
   {
      puts("\nfie can't be open");
      exit(1);
   }
   printf("%d.", i++);
   i++;
   do
   {
      c = fgetc(fp);
      if (c == '.')
      {
         printf("%c", c);
         if (fgetc(fp) == EOF)
            continue;
         printf("\n%d", i);
         i++;
         continue;
      }
      printf("%c", c);
   } while (c != EOF);
   fclose(fp);
   return 0;
}
