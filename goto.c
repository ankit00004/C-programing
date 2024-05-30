#include <stdio.h>

int main()
{
    // label:
    // printf("we are inside label");
    // goto end;
    // printf("Ankit bhardwaj");
    // goto label;
    // end:
    //   printf("\twe are at end");
      
      int num;
    for (int i=0; i<10; i++)
    {
        printf("%d\n",i);
        for (int j=0; j<9; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
               goto end;
            }
            
        }
        
    }
      end:

      return 0;
    

}