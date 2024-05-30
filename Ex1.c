/*Table counting*/

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);
    printf("Multiplication table of %d is as follow:\n", num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }
}
