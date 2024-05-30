#include <stdio.h>
#include <stdlib.h>
struct test
{
int x;
char arr[8];
int y;
};
int main()
{
printf("%d", sizeof(struct test));
return 0;
}