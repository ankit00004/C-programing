/*
  Traverse an array using the concept of pointers.
*/
// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>
int main()
{
    int Array[] = {10, 20, 40, 50, 60};
    int i;
    int *pArray = Array;  // defining the pointer to array Array
    for (i = 0; i < 5; i++)  // loop for output of array elements
        printf("Array[%d]= %d,\t *(pArray+%d) = %d\n", i, Array[i], i, *(pArray + i)); // *(pArray +i)is the value of Array[i]element of array.
    return 0;
}