#include <stdio.h>
struct student
{
    char name[44];
    int student_id;
   
    float mark;
};

int main()
{
    
    struct student s1[12];
     int class_divno[11]={0,1,2,3,4,5,6,7,8,9,10};
    printf("**************************************************\t");
printf("\n           Watson Elementary School            \n");
printf("**************************************************\t");
 
printf("\nDIPTISH is principal of Watson Elementary School");
printf("\n_____________________________________________________\t");
printf("\n_____________________________________________________\t");
printf("\nDate:- 13/01/2022");
printf("\nScore of Achievement test");
printf("\n-------------------------------------------------------\n");
    
     for(int i=1;i<=10;i++)
     { 
         printf(" class_divno=%d \n",class_divno[i]);
       
     for(int j=1;j<=12;j++)
     {
        
        printf("enter the name \n");
        scanf("%s",s1[j].name);
        printf("enter student_id\n");
        scanf("%d",&s1[j].student_id);
        printf("enter mark\n");
        scanf("%f",&s1[j].mark);
         
     }
     }
 
   for(int i=1;i<=10;i++)
   {
       printf("class_divno is %d \n",class_divno[i]);
       for(int j=1;j<=12;j++)
   
{
    printf(" name is %s \n  ",s1[j].name);
    printf("student_id is %d\n",s1[j].student_id);
    printf("mark %f outoff 100 \n ",s1[j].mark);
    
}
}

    return 0;



}

