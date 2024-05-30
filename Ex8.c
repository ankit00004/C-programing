
#include <stdio.h>


int main()
{
    float total_day,total_sec,total_hr,total_min;
    printf("enter total seconds=");
    scanf("%f",&total_sec);


         (total_sec>=60);
{
    total_min=total_sec/60;
    
    printf("\ntotal min=%.2f min",total_min);
}
        (total_sec>=3600);
{
    total_hr=total_sec/3600;
      
    printf("\ntotal hr=%.2f hr",total_hr);
    
}
    (total_sec>=86400);
{
    total_day=total_sec/86400;
     ;
    printf("\ntotal day=%.2f day",total_day);
}
}
    