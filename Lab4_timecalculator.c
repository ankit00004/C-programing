/*
Time Calculator: Design a program that asks the user to enter a number of seconds, and works as follows:

1. There are 60 seconds in a minute. If the number of seconds entered by the user
is greater than or equal to 60, the program should display the number of minutes in that many seconds.

2. There are 3,600 seconds in an hour. If the number of seconds entered by the user
is greater than or equal to 3,600, the program should display the number of hours in that many seconds.

3. There are 86,400 seconds in a day. If the number of seconds entered by the user
is greater than or equal to 86,400, the program should display the number of days in that many seconds.
*/
// Name: Ankit bhardwaj
// Class: FY P Division
// Roll no: 2213638

#include <stdio.h>

void main()
{
    int day, hour, min, sec, time, t;
    char d[10], h[10], s[10];
    printf("Please enter the time in sec  : ");
    scanf("%d", &time);
    t = time;
    day = time / 86400;
    time = time % 86400;
    hour = time / 3600;
    time = time % 3600;
    min = time / 60;
    time = time % 60;
    sec = time;
    printf("\n");
    printf("Time entered is : %d Day %d Hour %d Minutes %d Seconds ", day, hour, min, sec);
    if (t < 86400 && t >= 3600)
        printf("Time entered is : %d Hour %d Minutes %d Second ", hour, min, sec);
    else if (t < 3600 && t >= 60)
        printf("Time entered is : %d Minutes %d Second ", min, sec);
    else
        printf("Time entered is : %d Second ", sec);
}
